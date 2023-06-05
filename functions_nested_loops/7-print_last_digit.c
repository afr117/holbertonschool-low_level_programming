#include <stdio.h>

/* Calculate the remainder when divided by 10
 */
int print_last_digit(int num);

int print_last_digit(int num) {
	int last_digit = num % 10;
	if (last_digit < 0)
	last_digit = -last_digit;

	return last_digit;
}
