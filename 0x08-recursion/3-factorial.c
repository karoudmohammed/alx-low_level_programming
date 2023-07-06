#include "main.h"

/**
 * factorial - entry function
 *
 * @n: number
 *
 * description: function that returns the factorial of a given number.
 *
 * Return: fact
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}

if (n == 0 || n == 1)
{
	return (1);
}

return (n * factorial(n - 1));
}
