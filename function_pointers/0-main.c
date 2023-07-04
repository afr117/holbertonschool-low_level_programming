#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Test case 1: print_name_as_is */
    print_name("Bob", print_name_as_is);

    /* Test case 2: print_name_uppercase */
    print_name("Bob Dylan", print_name_uppercase);

    printf("\n");
    return (0);
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}
