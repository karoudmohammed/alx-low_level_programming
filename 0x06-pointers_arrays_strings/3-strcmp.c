#include "main.h"

/**
 * _strcmp - entry function
 *
 * @s1: a pointer to an destination
 * @s2: a pointer to a string
 *
 * description: function that compares two strings.
 *
 * Return: success or fail
 */

int _strcmp(char *s1, char *s2)
{
int diff;
int i;

for (i = 0; s1[i] != '\0'; i++)
{
	diff = s1[i] - s2[i];

	if (diff == 0)
	{
		continue;
	}
	else
	{
		return (diff);
	}
}

return (0);

}
