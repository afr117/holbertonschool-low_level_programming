#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * @brief The struct representing a dog.
 *
 * This struct contains information about a dog, including its name, age, and owner.
 */
struct dog
{
    char *name;     /**< The name of the dog. */
    float age;      /**< The age of the dog. */
    char *owner;    /**< The owner of the dog. */
};

#endif /* DOG_H */
