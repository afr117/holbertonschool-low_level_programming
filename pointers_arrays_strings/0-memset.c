/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	*s++ = b;

	return (s);
}
