#include <stddef.h>	/* for size_t */
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Description: This function takes an array, its size, and a function pointer
 * 		as arguments. It searches for an integer in the array by applying
 * 		the specified comparison function to each element.
 * 		It returns the index of the first element for which the cmp function
 * 		does not return 0. If no element matches, it returns -1.
 * 		If size <= 0, it also returns -1.
 *
 * Return: The index of the first matching element, or -1 if no match or
 * 		invalid parameters.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0) /* Check if array, cmp, and size are valid */
{
		for (i = 0; i < size; i++)
{
		if (cmp(array[i]) != 0) /* Compare element with cmp function */
{
		return (i); /* Return index of first match */
}
}
}

		return (-1); /* No match or invalid parameters */
}
