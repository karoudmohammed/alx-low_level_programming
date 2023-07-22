#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_dog - entry function
 *
 * @d: pointer to dog
 *
 * description: free memory
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
