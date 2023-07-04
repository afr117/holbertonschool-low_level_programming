#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Structure representing information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure holds information about a dog,
 * including its name, age, and owner.
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
