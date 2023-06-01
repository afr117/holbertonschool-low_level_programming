#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{

	putchar('0' + digit);
	if (digit != 9)
	{

	putchar(',');

	}
	}

	putchar('\n');

	return (0);
}
