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
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
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
