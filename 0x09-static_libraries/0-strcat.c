#include "main.h"

/**
 * _strcat - entry function
 *
 * @dest: a pointer to an destination
 * @src: a pointer to a string
 *
 * description: function that concatenates two strings.
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int c_src = 0;
int c_dest = 0;
int l, i, j;

while (src[c_src] != '\0')
{
	c_src++;
}

while (dest[c_dest] != '\0')
{
	c_dest++;
}

l = c_src + c_dest;

for (i = c_dest, j = 0; i < l; i++, j++)
{
	dest[i] = src[j];
}

dest[i] = '\0';

return (dest);
}
