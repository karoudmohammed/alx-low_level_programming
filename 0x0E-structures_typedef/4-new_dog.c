#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - entry function
 *
 * @name: str
 * @age: float
 * @owner: str
 *
 * description: create a new dog.
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));

if (d == NULL)
{
	return (NULL);
}

d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
