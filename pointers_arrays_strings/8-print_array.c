#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i != n - 1)
	printf(", ");
	}

	printf("\n");
}
