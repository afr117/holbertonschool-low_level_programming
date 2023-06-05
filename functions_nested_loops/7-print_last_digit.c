#include <stdio.h>
#include "main.h"

/*
   Function: print_last_digit

   Description:
      This function takes an integer 'num' as input and calculates the last digit of the number.
      It then prints the last digit using the _putchar function.
      If the last digit is negative, it converts it to a positive value before printing.
      Finally, it returns the calculated last digit.

   Parameters:
      - num: The integer number for which the last digit needs to be calculated and printed.

   Returns:
      The last digit of the input number 'num'.

   Warning:
      The '_putchar' function used for printing may need to be replaced with an appropriate output function.
*/
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar (last_digit + '0');

	return (last_digit);
}
