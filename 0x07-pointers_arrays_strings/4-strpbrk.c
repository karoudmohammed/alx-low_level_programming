#include "main.h"

/**
 * _strpbrk - entry function
 *
 * @s: a pointer
 * @accept: a character
 *
 * description: function that searches a string for any of a set of bytes.
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
int f_indx = 0;

for (; *s != '\0'; s++)
{
	for (; *accept != '\0'; accept++)
	{
		if (*s == *accept)
		{
			return (s);
		}

		f_indx++;
	}

	accept -= f_indx + 1;
}

return ('\0');
}
