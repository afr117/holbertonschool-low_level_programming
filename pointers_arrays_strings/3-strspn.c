#include "main.h"
#include <stddef.h>

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

	while (*s)
	{
		if (_strchr(accept, *s))
			count++;
		else
			break;
		s++;
	}

	return (count);
}

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
