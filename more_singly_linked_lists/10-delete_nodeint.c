#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: data structure head
 * @index: index of the list where the new node should be deleted. starts at 0
 *
 * Return: 1 if succeeded and 0 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;
	count = 0;

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);
	return (1);
}
