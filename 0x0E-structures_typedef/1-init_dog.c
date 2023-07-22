#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry function
 *
 * @d: pointer to struct dog
 * @name: str
 * @age: float
 * @owner: str
 *
 * description: function that searches for an integer.
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	exit(1);
d->name = name;
d->age = age;
d->owner = owner;
}
