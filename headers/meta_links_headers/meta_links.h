/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef META_LINKS_H
    #define META_LINKS_H
/**
 * @brief The structure for linked lists in meta_links
 *
 * Description
*/
typedef struct meta_linked_list_s {
    void *data; ///< The data contained by a node
    struct meta_linked_list_s *next; ///< A pointer to the newt node
} meta_linked_list_t;

/**
 * @brief Creates a new linked_list
 *
 * Description
 * @return A pointer to a new linked_list
*/
meta_linked_list_t *meta_new_list(void);

/**
 * @brief Adds data a linked_list
 *
 * Description
 * @param list The linked list you want to add data to.
 * @param data The data you want to add to the linked list.
*/
void meta_add_to_list(meta_linked_list_t *list, void *data);

/**
 * @brief Displays the content of a linked_list
 *
 * Description
 * @param list The linked list you want to dump.
*/
void meta_dump_list(meta_linked_list_t list);

#endif
