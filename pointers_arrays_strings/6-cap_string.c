#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
	str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
	str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
	str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
	str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] -= 32;
	}
	i++;
	}

	return (str);
}
