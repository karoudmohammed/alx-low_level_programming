#include "main.h"

/**
 * print_square - main function
 *
 * @size: size of square
 *
 * description: function that prints a square, followed by a new line.
 *
 * Return: Always 0.
 */

void print_square(int size)
{
int i;

for (i = 0; i < size && size > 0; i++)
{
	int j;

	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}

	_putchar('\n');
}
if (size <= 0)
{
	_putchar('\n');
}
}
