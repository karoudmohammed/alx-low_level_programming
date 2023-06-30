#include "main.h"

/**
 * cap_string - entry function
 *
 * @s: a pointer to string
 *
 * description: function that capitalizes all words of a string.
 *
 * Return: pointer
 */

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
	if (i > 0 && (s[i - 1] == ' ' || 
				s[i - 1] == '\n' || 
				s[i - 1] == '\t' || 
				s[i - 1] == '.' ||
				s[i - 1] == '!'))
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
}
return (s);
}
