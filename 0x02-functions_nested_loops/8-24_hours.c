#include "main.h"

/**
 * format_minutes - a custom function
 *
 * @n : the number of hour or minutes
 *
 * Description: 'display time'
 *
 * Return: Always 0 (Success)
 */

void format_minutes(int n)
{
int first_digit;
int last_digit;

if (n <= 9)
{
	_putchar('0');
	_putchar('0' + n);
}
else
{
	first_digit = n / 10;
	last_digit = n % 10;
	_putchar('0' + first_digit);
	_putchar('0' + last_digit);
}
}

/**
 * jack_bauer - Entry point
 *
 * Description: 'print every minute of the day'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
	for (m = 0; m < 60; m++)
	{
		format_minutes(h);
		_putchar(':');
		format_minutes(m);
		_putchar('\n');
	}
}
}
