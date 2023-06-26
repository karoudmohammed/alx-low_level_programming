#include "main.h"

/**
 * print_rev - entry function
 *
 * @s: a pointer to a string
 *
 * description: function that prints a reverse string.
 */

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
}

for (; i >= 0; i--)
{
	_putchar(s[i]);
}

_putchar('\n');
}
