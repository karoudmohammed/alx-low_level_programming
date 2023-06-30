#include "main.h"

/**
 * _strncpy - entry function
 *
 * @dest: a pointer to an destination
 * @src: a pointer to a string
 * @n: length
 *
 * description: function that copies a string.
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int c = 0;
int i;

while (src[c] != '\0')
{
	c++;
}

for (i = 0; i < n && i <= c; i++)
{
	dest[i] = src[i];
}

for (; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}
