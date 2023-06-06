#include <unistd.h>

/**
 * _putchar write char c to stdout
 * character print
 * return: on success 1.
 * on error, -1 is return, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
