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
int **grid, i, j;

if (width < 0
	|| width == 0
	|| height == 0
	|| height < 0)
{
	return (NULL);
}

grid = (int **)malloc(sizeof(int) * width);

for (i = 0; i < width; i++)
{
	grid[i] = (int *)malloc(sizeof(int) * height);
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
}

return (grid);
}
