#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int fox;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	fox = n % 10;

	printf("Last digit of %d is %d and ", n, fox);

	if (fox > 5)
	printf("is greater than 5\n");
	else if (fox == 0)
	printf("is 0\n");
	else
	printf("is less than 6 and not 0\n");
	return (0);
}
