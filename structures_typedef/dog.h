#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Represents a dog with its name, age, and owner information.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;	/* Name of the dog */
	float age;	/* Age of the dog */
	char *owner;	/* Owner of the dog */
};

#endif /* DOG_H */
