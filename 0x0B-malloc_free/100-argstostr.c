#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - entry function
 *
 * @ac: size of array
 * @av: arguments
 *
 * description: concatenates all the arguments of your program.
 *
 * Return: pointer or NULL if fails
 */

char *argstostr(int ac, char **av)
{
int i, j, c = 0, total = 0, k = 0;
char *p = NULL;

if (ac == 1 || av == NULL)
{
	return (p);
}

for (i = 1; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		c++;
	}
	total = c + 1;
	c = 0;
}

p = malloc(sizeof(char) * total);

for (i = 1; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		p[k] = av[i][j];
		k++;
	}
	
	if (i > 0 && i < (ac - 1))
	{
		p[k] = '\n';
		k++;
	}

	if (i == (ac - 1))
	{
		p[k] = '\0';
	}
}

return (p);
}
