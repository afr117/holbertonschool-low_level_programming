#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check for zero elements or size */
	if (nmemb == 0 || size == 0)
	return (NULL);

	/* Calculate total size to be allocated */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
	return (NULL);

	/* Set the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
