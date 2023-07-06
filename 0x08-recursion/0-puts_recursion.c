#include "main.h"

/**
 * _puts_recursion - entry function
 *
 * @s: a pointer to string
 *
 * description: function that prints a string, followed by new line
 *
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
}
