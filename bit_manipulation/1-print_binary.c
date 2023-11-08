#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - function prints binary representaion
 * @n: number to be represented in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leadingZeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			leadingZeros = 0;
		}
		else if (!leadingZeros)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
