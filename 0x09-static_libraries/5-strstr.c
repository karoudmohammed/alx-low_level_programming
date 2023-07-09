#include "main.h"

/**
 * _strstr - entry function
 *
 * @haystack: a pointer
 * @needle: a subset
 *
 * description: function that locates a substring.
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
int s_indx = 0, n_indx = 0;

while (*haystack != '\0')
{
	if (*haystack != *needle)
	{
		s_indx++;

		continue;
	}
	haystack++;
	needle++;
	n_indx++;
}

return ('\0');
}
