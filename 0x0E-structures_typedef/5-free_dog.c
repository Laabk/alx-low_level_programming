#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - struct that free the dogs
 * @d: idention of the dog
 * Return: always 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free((*d).owner);
	free(d);
	}
}
