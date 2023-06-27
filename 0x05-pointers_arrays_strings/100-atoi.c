#include "main.h"

/**
 * _atoi - entry function
 *
 * @s: a pointer to a string
 *
 * description: function that convert a string to an integer.
 *
 * Return: an integer
 */

int _atoi(char *s)
{
int i = 0;
int c_plus = 0;
int c_minus = 0;
int num = 0;
int flag = 0;
int sign = 0;

for (; s[i] != '\0'; i++)
{
	if (s[i] == '+')
	{
		c_plus += 1;
	}
	else if (s[i] == '-')
	{
		c_minus += 1;
	}
	else if (s[i] >= 48 && s[i] <= 57)
	{
		num = num * 10 + (s[i] - 48);
		flag = 1;
	}
	else if ((s[i] < 48 || s[i] > 57) && flag == 1)
	{
		break;
	}
}

sign = c_plus - c_minus;

if (sign < 0)
	num *= -1;

return (num);
}
