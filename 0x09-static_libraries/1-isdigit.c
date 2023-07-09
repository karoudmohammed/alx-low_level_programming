#include "main.h"

/**
 * _isdigit - main function.
 *
 * @c: the ascii code
 *
 * description: check if the character is digit
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
	return (1);
}

return (0);
}
