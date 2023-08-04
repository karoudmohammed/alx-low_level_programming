#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _pow - entry function
 *
 * @a: int
 * @b: int
 *
 * description: power of a to b.
 *
 * Return: Result
 */

unsigned int _pow(int a, int b)
{
unsigned int r = 1;

if (b == 0)
{
	return (1);
}

while (b > 0)
{
	r *= a;
	b--;
}

return (r);
}

/**
 * binary_to_uint - entry function
 *
 * @b: pointer to str
 *
 * description:  converts a binary number to an unsigned int.
 *
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
int base = 0, pow = 0;
unsigned int r = 0;

if (b == NULL)
{
	return (0);
}

while (b[base] != '\0')
{
	if (b[base] != '0' && b[base] != '1')
	{
		return (0);
	}

	base++;
}

--base;

while (base >= 0)
{
	if (b[base] == '1')
	{
		r += _pow(2, pow);
	}

	base--;
	pow++;
}

return (r);
}
