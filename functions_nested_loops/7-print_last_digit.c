#include <stdio.h>
#include "main.h"

/*
   Function: print_last_digit

   Description:
      This function takes an integer 'num' as input and returns its last digit.
      The function also prints the last digit.

   Parameters:
      - num: An integer number from which the last digit needs to be extracted.

   Returns:
      The last digit of the input number.
*/
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar (last_digit + '0');

	return (last_digit);
}
