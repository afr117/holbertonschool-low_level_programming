#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Description: This function checks if a character is a lowercase letter.
 *
 * Return: 1 if @c is a lowercase character, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{

	return (1);
	}
	return (0);
}
