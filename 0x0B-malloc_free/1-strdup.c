#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry function
 *
 * @str: string to be duplicated
 *
 * description: allocate memory which contains a copy of str.
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
char *dup;
int i, c = 0;

if (str == NULL)
{
	return ('\0');
}

for (i = 0; str[i] != '\0'; i++)
{
	c += 1;
}

dup = malloc(sizeof(char) * c);

if (c == 0 || dup == NULL)
{
	return ('\0');
}

for (i = 0; i < c; i++)
{
	dup[i] = str[i];
}

return (dup);
}
