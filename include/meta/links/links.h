/*
** EPITECH PROJECT, 2025
** meta_list_lib
** File description:
** linked_lists.h
*/

#ifndef LINKED_LISTS_H
    #define LINKED_LISTS_H
    #include <unistd.h>

typedef struct meta_list_s {
    char *data;
    struct meta_list_s *next;
    struct meta_list_s *prev;
} meta_list_t;

meta_list_t *meta_node_create(void);
void meta_node_push(char *data, meta_list_t **head);
void meta_node_delete(meta_list_t **head, char *str);
void meta_list_display(meta_list_t *list);
int meta_list_destroy(meta_list_t **head);
void meta_node_overwrite(meta_list_t **head, char *token, char *new_val);
char *meta_node_fetch(char *data, meta_list_t *head);
void meta_list_rdisplay(meta_list_t *list);
void meta_node_push_back(char *data, meta_list_t **head);
#endif
