#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where value is located, or -1 not found or NULL array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	return (-1);

	while (left <= right)
{
	mid = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
{
	if (i != left)
	printf(", ");
	printf("%d", array[i]);
}
	printf("\n");

	if (array[mid] == value)
	return (mid);

	if (array[mid] < value)
	left = mid + 1;
	else
	right = mid - 1;
}

	return (-1);
}
