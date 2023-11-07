#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees list_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
