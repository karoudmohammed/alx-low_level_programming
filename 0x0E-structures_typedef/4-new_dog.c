#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

c_name = malloc(sizeof(*name) * (strlen(name) + 1));
c_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));

if (d == NULL && c_name == NULL && c_owner == NULL)
{
	free(c_name);
	free(c_owner);
	free(d);
	return (NULL);
}

strcpy(c_name, name);
strcpy(c_owner, owner);

d->name = c_name;
d->age = age;
d->owner = c_owner;

return (d);
}
