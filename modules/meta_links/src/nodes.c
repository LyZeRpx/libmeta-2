/*
** EPITECH PROJECT, 2024
** meta_list_lib
** File description:
** nodes.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <threads.h>
#include <unistd.h>
#include "meta/libc/string.h"
#include "meta/links/links.h"
#include "meta/libc/printers.h"
#include "meta/utils.h"

meta_list_t *meta_node_create(void)
{
    meta_list_t *node = malloc(sizeof(meta_list_t));

    if (node EQUALS nullptr)
        return nullptr;
    node->data = nullptr;
    node->next = nullptr;
    node->prev = nullptr;
    return node;
}

void meta_node_push(char *data, meta_list_t **head)
{
    meta_list_t *node = meta_node_create();

    if (node == nullptr)
        return;
    node->next = *head;
    if (*head != nullptr)
        (*head)->prev = node;
    node->data = meta_strdup(data);
    *head = node;
}

static void replace_head(meta_list_t **head, meta_list_t **save_head)
{
    free((*head)->data);
    free((*head));
    *head = *save_head;
}

void meta_node_delete(meta_list_t **head, char *str)
{
    meta_list_t *save_head = *head;

    if (head == nullptr)
        return;
    for (; (*head)->next != nullptr &&
    !META_STR_BEGINS((*head)->data, str); *head = (*head)->next);
    if (!META_STR_BEGINS((*head)->data, str))
        return;
    if ((*head)->prev == nullptr && (*head)->next)
        (*head)->next->prev = (*head)->prev;
    if ((*head)->next == nullptr && (*head)->prev)
        (*head)->prev->next = (*head)->next;
    if ((*head)->next && (*head)->prev) {
        (*head)->next->prev = (*head)->prev;
        (*head)->prev->next = (*head)->next;
        replace_head(head, &save_head);
        return;
    }
    *head = save_head;
}

void meta_list_display(meta_list_t *list)
{
    for (meta_list_t *current = list; current != nullptr;
        current = current->next)
        meta_mprintf(STRING_LN, (current->data));
}

int meta_list_destroy(meta_list_t **head)
{
    if ((*head)->next == nullptr && (*head)->prev == nullptr) {
        free((*head)->data);
        free((*head));
        return EXIT_SUCCESS;
    }
    for ((*head) = (*head)->next; (*head)->next != nullptr;
        (*head) = (*head)->next) {
        free((*head)->data);
        free((*head)->prev);
    }
    return EXIT_SUCCESS;
}
