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
char *c_name;
char *c_owner;

d = malloc(sizeof(dog_t));

c_name = (char *)(malloc(sizeof(name)));
c_owner = (char *)(malloc(sizeof(owner)));

if (d == NULL)
{
	free(c_name);
	free(c_owner);
	return (NULL);
}

c_name = name;
c_owner = owner;
d->name = c_name;
d->age = age;
d->owner = c_owner;

return (d);
}
