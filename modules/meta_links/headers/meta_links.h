/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef META_LINKS_H
    #define META_LINKS_H

typedef struct meta_linked_list_s {
    int data;
    struct meta_linked_list_s *next;
} meta_linked_list_t;

meta_linked_list_t *meta_new_list(void);
meta_linked_list_t *meta_create_node(int data);
meta_linked_list_t *meta_push_front(meta_linked_list_t *head, int data);
void meta_dump_list(meta_linked_list_t *head);

#endif
