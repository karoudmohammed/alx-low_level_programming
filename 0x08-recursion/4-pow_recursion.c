#include "main.h"

/**
 * _pow_recursion - entry function
 *
 * @x: number
 * @y: power
 *
 * description: function that returns the value x raised to the power of y.
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}

if (x == 1 || y == 0)
{
	return (1);
}

if (y == 0)
{
	return (0);
}

return (x * _pow_recursion(x, y - 1));
}
