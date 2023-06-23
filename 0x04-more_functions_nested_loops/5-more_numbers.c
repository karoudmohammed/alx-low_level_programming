#include "main.h"

/**
 * format_res - custom function
 *
 * @j: check variable
 *
 * Description: 'format output'
 *
 * Return: Always 0 (Success)
 */

void format_res(int j)
{
int r;

if (j == 0)
{
	return;
}

r = j % 10;

format_res(j / 10);

_putchar('0' + r);
}

/**
 * more_numbers - Entry point
 *
 * Description: 'function that prints 10 times 1 to 14 -> new line'
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
	int j;

	for (j = 0; j < 15; j++)
	{
		format_res(j);
	}
_putchar('\n');
}
}
