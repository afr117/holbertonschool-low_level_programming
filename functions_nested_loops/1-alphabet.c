#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int _putchar(char c);

int main(void)
{
	print_alphabet();
	return (0);
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
