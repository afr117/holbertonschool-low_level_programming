#include <stdio.h>
#include <main.c>
#include <main.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int _putchar(char c);

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

		_putchar('\n');
}
