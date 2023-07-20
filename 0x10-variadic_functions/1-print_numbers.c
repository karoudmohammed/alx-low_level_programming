#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - entry function
 *
 * @separator: separator
 * @n: number of ints
 *
 * description: function that prints numbers, followed by a new line.
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, int));
	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
}

printf("\n");

va_end(ap);
}
