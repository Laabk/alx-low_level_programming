#include "dog.h"
#include <stdio.h>

/**
* print_dog - Use to print the struct dog
*@d: Identification of the dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	if ((*d).name == NULL)
	{
	printf("nil\n");
	}
	else
	printf("Name: %s\n", (*d).name);
	if ((*d).owner == NULL)
	{
	printf("nil\n");
	}
	else
	printf("Owner: %s\n", (*d).owner);
	if ((*d).age < 0)
	{
	printf("nil\n");
	}
	else
	printf("Age: %f\n", d->age);
}
