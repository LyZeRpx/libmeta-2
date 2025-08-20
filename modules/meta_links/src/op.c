/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** op.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "meta/utils.h"
#include "meta/links/links.h"
#include "meta/libc/printers.h"
#include "meta/libc/string.h"


static void meta_memset(char *data, size_t size, int byte)
{
    for (size_t i = 0; data[i] && i != size; i++)
        data[i] = byte;
}

void meta_node_overwrite(meta_list_t **head, char *token, char *new_val)
{
    meta_list_t *save_head = *head;
    size_t size = meta_strlen(token) + meta_strlen(new_val) + 2;

    for (; (*head)->next != nullptr; *head = (*head)->next) {
        if (META_STR_BEGINS(token, ((*head)->data))) {
            free((*head)->data);
            (*head)->data = malloc(sizeof(char) * size);
            meta_memset((*head)->data, size, 0);
            meta_strcpy(((*head)->data), token);
            meta_strcat((*head)->data, "=");
            meta_strcat((*head)->data, new_val);
            break;
        }
    }
    *head = save_head;
}

char *meta_node_fetch(char *data, meta_list_t *head)
{
    meta_list_t *current = head;

    for (; current->next != nullptr; current = current->next) {
        if (meta_strncmp(current->data, data, meta_strlen(data))) {
            return meta_strdup(current->data + meta_strlen(data));
        }
    }
    return nullptr;
}

void meta_list_rdisplay(meta_list_t *list)
{
    meta_list_t *current = list;

    for (; current->next != nullptr; current = current->next);
    for (; current != nullptr; current = current->prev)
        meta_mprintf(STRING_LN, current->data);
}

void meta_node_push_back(char *data, meta_list_t **head)
{
    meta_list_t *node = meta_node_create();
    meta_list_t *save_head = *head;

    if (save_head == nullptr)
        return;
    for (; (*head)->next != nullptr; *head = (*head)->next);
    (*head)->next = nullptr;
    (*head)->data = meta_strdup(data);
    node->prev = *head;
    *head = save_head;
}
