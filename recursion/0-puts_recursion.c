#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1) != 1 ? -1 : 1);
}

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar('\n'); /* Print new line */
		return;
	}

	_putchar(*s); /* Print current character */
	_puts_recursion(s + 1); /* Recursively print remaining characters */
}
