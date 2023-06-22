/**
 * is_prime_helper - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The divisor to check against.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	/* Base cases */
	if (n <= 1) /* 0 and 1 are not prime numbers */
		return (0);
	if (n == 2) /* 2 is a prime number */
		return (1);
	if (n % i == 0) /* If divisible by any number other than 1 and itself, not prime */
		return 0;
	if (i * i > n) /* If no divisor found yet, number is prime */
		return (1);

	return (is_prime_helper(n, i + 1)); /* Check next divisor */
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Function implementation */
	return (is_prime_helper(n, 2)); /* Start checking from divisor 2 */
}
