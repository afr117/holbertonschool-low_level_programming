#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of listint_t list.
 * @head: data structure head
 * @n: new node to be added
 *
 * Return:  address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}

	return (newNode);
}

