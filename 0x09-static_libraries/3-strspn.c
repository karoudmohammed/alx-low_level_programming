#include "main.h"

/**
 * _strspn - entry function
 *
 * @s: a pointer
 * @accept: a character
 *
 * description: function that gets the length of a prefix substring.
 *
 * Return: n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int f_indx = 0;

for (; *s != '\0'; s++)
{
	for (; *accept != '\0'; accept++)
	{
		if (*s == *accept)
		{
			c++;
		}

		f_indx++;
	}

	accept -= f_indx + 1;
}

return (c);
}
