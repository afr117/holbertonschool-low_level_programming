#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: Function pointer to the printing function
 *
 * Description: This function takes a name and a function pointer as arguments
 *		It checks if the name and function pointer are not NULL, and
 *		then calls the specified printing function to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)	/* Check if name and f are not NULL */
	f(name);
}
