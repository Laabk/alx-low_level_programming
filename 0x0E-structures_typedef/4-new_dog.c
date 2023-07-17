#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dog 
{
	float age;
	char *owner, *name;
} dog_t;

/**
 * new_dog brings the new dog.
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: Owner of dog.
 * Return: A pointer to a new dog.
 *         NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return NULL;
	}
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL) 
	{
	free(new_dog);
	return NULL;
	}
	strcpy(new_dog->name, name);
	new_dog->owner = malloc(strlen(owner) + 1)
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return NULL;
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return new_dog;
}
int main(void)
{
	dog_t *my_dog = new_dog("daady", 2.7, "david");
	if (my_dog != NULL) 
	printf("Dog name: %s\n", my_(*d).name)
	printf("Dog age: %.1f\n", my_(*d).age);
	printf("Dog owner: %s\n", my_(*d).owner);
}
else
printf("Failed to create a new dog.\n");
}
if (my_dog != NULL)
{
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
}
return 0;
}
