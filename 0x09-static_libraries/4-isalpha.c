#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: The character to check if is alphabet
 *
 * Description: 'print 0 or 1 if the character is an alphabet'
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if ((c < 123 && c >= 97) || (c < 91 && c >= 65))
	return (1);
else
	return (0);
}
