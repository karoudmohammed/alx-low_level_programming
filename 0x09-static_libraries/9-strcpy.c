#include "main.h"

/**
 * _strcpy - entry function
 *
 * @dest: a pointer to an destination
 * @src: a pointer to a string
 *
 * description: function that copies string (src) to dest.
 *
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int c = 0;
int i;

while (src[c] != '\0')
{
	c++;
}

for (i = 0; i <= c; i++)
{
	dest[i] = src[i];
}


return (dest);
}
