#include "main.h"

/**
 * print_numbers - prints numbersi
 *
 * return: Allways 0.
 */
void print_numbers(void)
{
char k;

for (k = 0; k <= 9; k++)
{
_putchar('0' + k);
}
_putchar('\n');
}
