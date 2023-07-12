#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry function
 *
 * @width: integer
 * @height: integer
 *
 * description: returns a pointer to a 2 dimensional array of integers.
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int size = width * height;
int **grid;

if (size == 0)
{
	return (NULL);
}

grid = (int **)malloc(sizeof(int) * size);

return (grid);
}
