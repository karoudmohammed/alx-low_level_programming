#include "main.h"

/**
 * leet - entry function
 *
 * @s: a pointer to string
 *
 * description: function that encodes a string into 1337.
 *
 * Return: pointer
 */

char *leet(char *s)
{
int i, j;
char *enc = "a7A7e3E3o0O0t7T7l1L1";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; enc[j] != '\0'; j++)
	{
		if (s[i] == enc[j] &&
				((s[i] >= 65 && s[i] <= 90) ||
				 (s[i] >= 97 && s[i] <= 122)))
		{
			s[i] = enc[j + 1];
			break;
		}
	}
}
return (s);
}
