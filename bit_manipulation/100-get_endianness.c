#include "main.h"

/**
 * get_endianness - Function to check the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

    /* If the first byte (lowest address) is 1, it's little-endian. */
	return (*c);
}
