/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_links_file
*/

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "meta_links.h"

meta_linked_list_t *meta_create_node(int data)
{
    meta_linked_list_t *new_head = malloc(sizeof(meta_linked_list_t));

    if (!new_head)
        return NULL;
    new_head->data = data;
    new_head->next = NULL;
    return new_head;
}

meta_linked_list_t *meta_push_front(meta_linked_list_t *head, int data)
{
    meta_linked_list_t *new_head = meta_create_node(data);

    new_head->next = head;
    return new_head;
}

void meta_dump_list(meta_linked_list_t *head)
{
    meta_linked_list_t *current = head;

    while (current != NULL) {
        dprintf(1, "data == %d\n", current->data);
        current = current->next;
    }
    dprintf(1, "\n");
}