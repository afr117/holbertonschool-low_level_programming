#include <stdio.h>

/* Calculate the remainder when divided by 10
 */
int print_last_digit(int) {
    int last_digit = num % 10;
    if (num < 0)
	num = -num;

    return last_digit;
}
