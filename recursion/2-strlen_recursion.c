#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: string end */
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* Recursively count remaining characters */
}
