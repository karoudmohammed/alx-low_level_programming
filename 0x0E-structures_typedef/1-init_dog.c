#include "dog.h"

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
d->name = name;
d->age = age;
d->owner = owner;
}
