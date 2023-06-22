#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: The number
 *
 * Description: 'a function that print the last digit of a number'
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
	n = n * (-1);
}

if (n == 0)
{
	_putchar('0' + n);
	return (n);
}

last_digit = n % 10;
_putchar('0' + last_digit);
return (last_digit);
}
