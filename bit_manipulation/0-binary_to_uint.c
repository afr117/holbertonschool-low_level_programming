#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if one or more chars is
 * not 1 or 0 or if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++, b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = (sum << 1) + (*b - '0');
	}

	return (sum);
}
