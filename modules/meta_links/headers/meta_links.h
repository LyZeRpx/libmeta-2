/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef META_LINKS_H
    #define META_LINKS_H

typedef struct meta_linked_list_s
{
    void *data;
    struct meta_linked_list_s *next;
} meta_linked_list_t;

meta_linked_list_t *meta_new_list(void);
void meta_add_to_list(meta_linked_list_t *list, void *data);
void meta_dump_list(meta_linked_list_t list);

#endif
