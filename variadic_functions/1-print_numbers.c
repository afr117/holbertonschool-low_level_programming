#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		int temp = num;
		int digits = 1;
		int j;

		/* Handle negative numbers */
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}

		/* Count the number of digits */
		while (temp / 10 != 0)
		{
			digits++;
			temp /= 10;
		}

		/* Print the number */
		for (j = 0; j < digits; j++)
		{
			int divisor = 1;
			int k;

			for (k = 1; k < digits - j; k++)
				divisor *= 10;

			putchar((num / divisor) % 10 + '0');
		}

		/* Print the separator */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	putchar('\n');
}

