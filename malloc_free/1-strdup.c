#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	return (NULL);

	length = strlen(str) + 1;
	duplicate = malloc(length * sizeof(char));

	if (duplicate != NULL)
	memcpy(duplicate, str, length);

	return (duplicate);
}

