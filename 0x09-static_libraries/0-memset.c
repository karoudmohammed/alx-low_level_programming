#include "main.h"

/**
 * _memset - entry function
 *
 * @s: a pointer
 * @b: a character
 * @n: number of bytes
 *
 * description: function that fills memory with a constant byte.
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}

return (s);
}
