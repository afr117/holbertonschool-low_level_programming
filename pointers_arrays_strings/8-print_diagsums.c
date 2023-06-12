#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	/* Calculate sum of the main diagonal */
	sum1 += a[i * size + i];

	/* Calculate sum of the secondary diagonal */
	sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums of the diagonals */
	printf("%d, %d\n", sum1, sum2);
}
