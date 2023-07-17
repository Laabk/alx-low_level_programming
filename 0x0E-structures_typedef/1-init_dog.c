#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - This declares the dog type with a  a variable.
*@d: For the dog identification
*@name: Name of the dog
*@age: Age of the dog
*@owner: Name of the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	(*d).owner = owner;
	d->name = name;
	d->age = age;
}
}
