#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at index of dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted (index starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

