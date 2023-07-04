#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: If d is NULL, nothing is printed.
 *              If any element of d is NULL, "(nil)" is printed instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
