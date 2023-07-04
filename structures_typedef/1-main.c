#include <stdio.h>
#include "dog.h"

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

struct dog my_dog;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	printf("My dog's name is %s, and it is %.2f years old\n", my_dog.name, my_dog.age);
	printf("It is owned by %s\n", my_dog.owner);

	return (0);
}
