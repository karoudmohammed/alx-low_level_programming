#include "main.h"

/**
 * puts_half - entry function
 *
 * @str: a pointer to a string
 *
 * description: function that prints half of a string.
 */

void puts_half(char *str)
{
int c = 0;
int i;
int half;

while (str[c] != '\0')
{
	c++;
}

if (c % 2 != 0)
	half = (c - 1) / 2;
	half++;
else
	half = c / 2;

for (i = half; i < c; i++)
{
	_putchar(str[i]);
}

_putchar('\n');
}
