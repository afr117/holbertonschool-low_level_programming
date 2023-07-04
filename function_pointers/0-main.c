#include <stdio.h>

void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

int main(void)
{
	// Test case 1: print_name_as_is
	print_name("Bob", print_name_as_is);

	// Test case 2: print_name_uppercase
	print_name("Bob Dylan", print_name_uppercase);

	printf("\n");
	return (0);
}
