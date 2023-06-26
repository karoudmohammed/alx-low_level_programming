#include "main.h"

/**
 * _puts - entry function
 *
 * @str: a pointer to a string
 *
 * description: function that prints a str, followed by a new line, to stdout.
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}

_putchar('\n');
}
