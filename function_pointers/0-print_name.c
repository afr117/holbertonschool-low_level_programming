#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
    if (name && f) /* Check if name and f are not NULL */
        f(name);
}

