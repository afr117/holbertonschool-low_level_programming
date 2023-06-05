#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number and returns its value.
 * @num: The input number.
 * Return: The value of the last digit.
 * Get the last digit using the modulus operator
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	printf("The last digit is: %d\n", last_digit);
	return last_digit;
}
