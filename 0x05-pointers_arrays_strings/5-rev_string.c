#include "main.h"

/**
 * rev_string - entry function
 *
 * @s: a pointer to a string
 *
 * description: function that prints a reverse string.
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;
int temp;

while (s[i] != '\0')
{
	i++;
}

--i;

for (; i >= 0 && j <= i; i--, j++)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}
}
