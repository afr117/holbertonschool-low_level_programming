#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s);

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length > 0)
	{
	_putchar(s[length - 1]);
	length--;
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
