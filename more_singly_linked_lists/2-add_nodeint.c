#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t list.
 * @head: data structure head
 * @n: new node to be added
 *
 * Return:  address of the new elemetns, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

