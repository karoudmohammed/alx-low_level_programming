#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: The number to be converted to absolute value
 *
 * Description: 'compute the absolute value of a number'
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
if (n >= 0)
	return (n);
else
	return (n * -1);
}
