#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int num);

int main(void)
{
    int r;

	printf("%d", print_last_digit(98));
	printf("%d", print_last_digit(0));
	r = print_last_digit(-1024);
	printf("%d%d%d%d\n", r, r, r, r);
	return (0);
}
