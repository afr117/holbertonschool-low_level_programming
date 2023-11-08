#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_bit - function to get the value of a bit at a given index
 * @n: unsigned long int to retrieve a bit from
 * @index:  index where to retrieve from
 *
 * Return: the value of a bit at the specified index or -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	bit_value = ((n & mask) != 0) ? 1 : 0;

	return (bit_value);
}
