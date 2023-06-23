#include "main.h"

/**
 * print_line - main function
 *
 * @n: length of line
 *
 * description: a function that draws a straight line in the terminal.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
while (n > 0)
{
	_putchar('_');
	n--;
}

_putchar('\n');
}
