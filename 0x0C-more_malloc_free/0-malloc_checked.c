#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry function
 *
 * @b: integer
 *
 * description: function that allocates memory using malloc.
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
int *p = NULL;

p = malloc(b);

if (p == NULL)
{
	exit(98);
}

return (p);
}
