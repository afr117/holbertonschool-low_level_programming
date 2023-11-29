#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
{
	if (count == index)
		return (head);

	count++;
	head = head->next;
}

	return (NULL);
}
