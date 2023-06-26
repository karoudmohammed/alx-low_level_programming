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
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
	_putchar(str[i]);
}

_putchar('\n');
}
