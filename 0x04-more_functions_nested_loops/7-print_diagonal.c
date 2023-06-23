#include "main.h"

/**
 * print_diagonal - main function
 *
 * @n: length of line
 *
 * description: function that draws a diagonal line on the terminal.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int i;

for (i = 0; i < n && n > 0; i++)
{
	int j = 0;

	while (j < i)
	{
		if (i != 0)
		{
			_putchar(' ');
		}
		j++;
	}
	_putchar('\\');
	_putchar('\n');
}

if (n <= 0)
{
	_putchar('\n');
}
}
