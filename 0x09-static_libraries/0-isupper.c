#include "main.h"

/**
 * _isupper - main function.
 *
 * @c: the ascii code
 *
 * description: check if the character is upper case
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 65 && c < 91)
{
	return (1);
}

return (0);
}
