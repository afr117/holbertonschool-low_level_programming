#include "main.h" /* Header file */

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _strcpy - Copy string pointed to by src, including
 *           terminating null byte to buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
