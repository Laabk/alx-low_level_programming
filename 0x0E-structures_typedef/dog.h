#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - A new form that is to be used in describing
 * the dog.
 * @name: The dog's usual name.
 * @age: The dogs years.
 * @owner: Th one who owns dog.
 */

typedef struct dog
{
	float age;
	char *name, *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
