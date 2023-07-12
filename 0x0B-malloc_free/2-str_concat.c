#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - entry function
 *
 * @s1: string
 * @s2: string
 *
 * description: function that concatenates two strings.
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
char *new;
int i, j, c1 = 0, c2 = 0, l;

for (i = 0; s1[i] != '\0'; i++)
{
	c1 += 1;
}

if (s2 == NULL)
{
	c1 += 1;
}

for (i = 0; s2[i] != '\0'; i++)
{
	c2 += 1;
}

if (s2 != NULL)
{
	c2 += 1;
}

l = c1 + c2;

new = malloc(sizeof(char) * l);

if (l == 0 || new == NULL)
{
	return ('\0');
}

for (i = 0; i <= c1 && c1 != 0 && s1 != NULL; i++)
{
	new[i] = s1[i];
}

for (j = 0; i <= l && s2 != NULL; i++, j++)
{
	new[i] = s2[j];
}

return (new);
}
