#include "main.h"

int sqrt_helper(int n, int i); /* Function declaration for sqrt_helper */
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n) /* Function implementation */
{
	if (n < 0) /* Negative numbers don't have a natural square root */
	return (-1);

	return (sqrt_helper(n, 0)); /* Helper function, calculate square root */
}
/**
 * sqrt_helper - Recursive helper function to calculate square root.
 * @n: The number to calculate the square root of.
 * @i: The current number being checked.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n) /* Found the square root */
		return (i);
	if (i * i > n) /* Overshot the square root, it doesn't exist */
		return (-1);

	return (sqrt_helper(n, i + 1)); /* Increment i and continue searching */
	return (sqrt_helper(n, 0));
}
