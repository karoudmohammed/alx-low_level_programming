#include "main.h"

/**
 * format_res - custom function
 *
 * @res: integer number
 *
 * Description: 'format output'
 *
 * Return: Always 0 (Success)
 */

void format_res(int res)
{
if (res <= 9)
{
	_putchar('0' + res);
}
else
{
	int first_digit = res / 10;
	int last_digit = res % 10;

	_putchar('0' + first_digit);
	_putchar('0' + last_digit);
}
}
/**
 * times_table - Entry point
 *
 * Description: 'print the 9 times tables, starting with 0'
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int i;
int j;
int res;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		res = i * j;
		format_res(res);
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
