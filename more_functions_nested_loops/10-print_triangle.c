#include <stdio.h>

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size - i; j++)
	{
	printf(" ");
	}

	for (j = 1; j <= i; j++)
	{
	printf("#");
	}

	printf("\n");
	}
}

