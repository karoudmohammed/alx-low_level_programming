#include "main.h"

/**
 * _strchr - entry function
 *
 * @s: a pointer
 * @c: a character
 *
 * description: function that locates a character in a string.
 *
 * Return: a pointer to s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}

return ('\0');
}
