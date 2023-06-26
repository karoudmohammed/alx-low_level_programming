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
int i;

while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}

dest[i] = '\0';

return (dest);
}
