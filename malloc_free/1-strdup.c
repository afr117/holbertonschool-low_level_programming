#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	size_t length = strlen(str) + 1;
	char *duplicate = malloc(length * sizeof(char));

	if (duplicate != NULL)
	memcpy(duplicate, str, length);

	return (duplicate);
}
