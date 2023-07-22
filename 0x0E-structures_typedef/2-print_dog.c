#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - entry function
 *
 * @d: pointer to struct dog
 *
 * description: function that print a struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
char *name;
float age;
char *owner;

if (d == NULL)
{
	exit(1);
}

name = !d->name ? "(nil)" : d->name;
age = !d->age ? 0 : d->age;
owner = !d->owner ? "(nil)" : d->owner;

printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
