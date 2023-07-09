#include "main.h"

/**
 * _strncat - entry function
 *
 * @dest: a pointer to an destination
 * @src: a pointer to a string
 * @n: length
 *
 * description: function that concatenates two strings.
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int c1 = 0, c2 = 0;
int i, j, t;

while (dest[c1] != '\0')
{
	c1++;
}

while (src[c2] != '\0')
{
	c2++;
}

t = c1 + c2;

for (i = c1, j = 0; j < n && i < t; i++, j++)
{
	dest[i] = src[j];
}

dest[i] = '\0';

return (dest);
}
