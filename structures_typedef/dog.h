#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;	/* Name of the dog */
	float age;	/* Age of the dog */
	char *owner;	/* Owner of the dog */
};

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
