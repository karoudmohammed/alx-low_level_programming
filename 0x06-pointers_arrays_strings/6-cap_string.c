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
int p;

for (i = 0; s[i] != '\0'; i++)
{
	p = i - 1;

	if (i > 0 && (s[p] == ' ' ||
			s[p] == '\n' ||
			s[p] == '\t' ||
			s[p] == '.' ||
			s[p] == '!' ||
			s[p] == '?' ||
			s[p] == ',' ||
			s[p] == ';' ||
			s[p] == '"' ||
			s[p] == '(' ||
			s[p] == ')' ||
			s[p] == '{' ||
			s[p] == '}'))
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
}
return (s);
}
