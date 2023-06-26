#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	return NULL;

	length = strlen(str) + 1;
	duplicate = malloc(length * sizeof(char));

	if (duplicate != NULL)
	memcpy(duplicate, str, length);

	return (duplicate);
}

