#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length, owner_length;

	if (name == NULL || owner == NULL)
		return NULL;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_length = strlen(name);
	owner_length = strlen(owner);

	new_dog->name = malloc((name_length + 1) * sizeof(char));
	new_dog->owner = malloc((owner_length + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL) {
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strncpy(new_dog->name, name, name_length);
	strncpy(new_dog->owner, owner, owner_length);
	new_dog->name[name_length] = '\0';
	new_dog->owner[owner_length] = '\0';

	new_dog->age = age;

	return (new_dog);
}
