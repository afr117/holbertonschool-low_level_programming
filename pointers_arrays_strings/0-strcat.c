#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *
 */

int main()
{
	char src[20] = "Hello ";
	char dest[] = "World!";

	strcat(src,dest);
	printf("Concatenated String: %s\n", src);
	
	return (0);
}
