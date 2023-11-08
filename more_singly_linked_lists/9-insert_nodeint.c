#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: data structure head
 * @idx: index of the list where the new node should be added. starts at 0
 * @n: given position to insert new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *current, *previous;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;
	previous = NULL;
	count = 0;
	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (count == idx)
	{
		previous->next = newNode;
		newNode->next = current;
		return (newNode);
	}
	else
	{
		free(newNode);
		return (NULL);
	}
}
