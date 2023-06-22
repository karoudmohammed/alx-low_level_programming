#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: The character to check if an number is +, - or 0
 *
 * Description: 'return 0 or 1 and print accordingly the sign of the number'
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
