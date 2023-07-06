#include "main.h"

/**
 * _print_rev_recursion - entry function
 *
 * @s: a pointer to string
 *
 * description: function that prints a string in reverse
 *
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
