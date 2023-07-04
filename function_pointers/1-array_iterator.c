#include <stddef.h> /* for size_t */

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Description: This function takes an array, its size, and a function pointer
 *      as arguments. It iterates over each element of the array and
 *      applies the specified function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array && action) /* Check if array and action are not NULL */
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]); /* Call the function on each element */
        }
    }
}

