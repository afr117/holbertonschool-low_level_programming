#include <stdio.h>
#include "main.h"

/** Function: print_last_digit: Returns the last digit of an input number.
 *
 * Parameters r - @num: An integer number.
 *
 * Returns: The last digit of the input number.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar (last_digit + '0');

	return (last_digit);
}
