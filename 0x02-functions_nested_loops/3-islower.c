#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: The character to check if is lower
 *
 * Description: 'print 0 or 1 if the character is lower case'
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c < 123 && c >= 97)
	return (1);
else
	return (0);
}
