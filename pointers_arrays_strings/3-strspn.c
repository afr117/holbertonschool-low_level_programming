#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s consisting only of bytes
 *         from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s && (match = 0) == 0)
	{
	while (*accept && (*s != *accept))
	accept++;

	match = (*accept != '\0');
	count += match;
	s++;
	}

	return (count);
}
