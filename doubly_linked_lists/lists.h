#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function to print all the elements of a dlistint_t list */
size_t print_dlistint(const dlistint_t *h);

/* Function to get the number of elements in a dlistint_t list */
size_t dlistint_len(const dlistint_t *h);

/* Function to add a new node at the beginning of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Function to add a new node at the end of a dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Function to free a dlistint_t list */
void free_dlistint(dlistint_t *head);

/* Function to get a node at a given index in a dlistint_t list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Function to calculate the sum of all integers stored in a dlistint_t list */
int sum_dlistint(dlistint_t *head);

/* Function to insert a new node at a given index in a dlistint_t list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Function to delete the node at a given index in a dlistint_t list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */

