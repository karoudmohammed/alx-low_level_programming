#include "main.h"

/**
 * _memcpy - entry function
 *
 * @dest: a pointer to the destination
 * @src: a pointer to the source
 * @n: number of bytes
 *
 * description: function that copies memory area.
 *
 * Return: a pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	*dest = src[i];
	dest++;
	i++;
}

return (dest);
}
