#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements of a listint_t list.
 * @h: data structure
 *
 * Return:  number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

