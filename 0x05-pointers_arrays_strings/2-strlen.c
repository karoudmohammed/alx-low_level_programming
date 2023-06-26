#include "main.h"

/**
 * _strlen - entry function
 *
 * @s: a pointer to a character
 *
 * description: function that returns the length of a string.
 *
 * Return: the length of set of characters s
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
}

return (i);
}
