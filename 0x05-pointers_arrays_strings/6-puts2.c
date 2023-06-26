#include "main.h"

/**
 * puts2 - entry function
 *
 * @str: a pointer to a string
 *
 * description: function that prints even number in string.
 */

void puts2(char *str)
{
int c = 0;
int i;

while (str[c] != '\0')
{
	c++;
}

for (i = 0; i < c; i += 2)
{
	_putchar(str[i]);
}

_putchar('\n');
}
