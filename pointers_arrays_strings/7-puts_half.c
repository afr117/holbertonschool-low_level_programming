#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _strlen - Computes the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index = (length + 1) / 2;
	int i;

	for (i = start_index; i < length; i++)
	_putchar(str[i]);

	_putchar('\n');
}

/**
 * _strlen - Computes the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	length++;

	return length;
}
