#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - entry function
 *
 * @array: pointer to array of ints
 * @size: integer
 * @cmp: pointer to function
 *
 * description: function that searches for an integer.
 *
 * Return: Int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
	return (-1);
}

if (array != NULL && cmp != NULL)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
}

return (-1);
}
