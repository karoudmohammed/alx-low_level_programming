#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry function
 *
 * @n: number of arguments
 *
 * description: function that returns the sum of all its parameters.
 *
 * Return: Int
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i, sum = 0;

if (n == 0)
{
	return (0);
}

va_start(ap, n);

for (i = 0; i < (int)n; i++)
{
	sum += va_arg(ap, int);
}

va_end(ap);

return (sum);
}
