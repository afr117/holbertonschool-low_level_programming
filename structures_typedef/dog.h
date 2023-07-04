#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/* Struct definition for dog */
struct dog
{
        char *name;     /* Name of the dog */
        float age;      /* Age of the dog */
        char *owner;    /* Owner of the dog */
};

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

