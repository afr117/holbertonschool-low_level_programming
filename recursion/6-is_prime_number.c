#include "main.h"
#include "stdio.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    int divisor;

    if (n <= 1)
        return (0);

    for (divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
            return (0);
    }

    return (1);
}
