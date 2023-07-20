#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - entry function
 *
 * @array: pointer to array of ints
 * @size: integer
 * @action: pointer to function
 *
 * description: iterate over an array with specific action.
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array != NULL && action != NULL && size > 0)
{
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
}
