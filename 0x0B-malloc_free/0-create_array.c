#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry function
 *
 * @size: size of array
 * @c: character to fill in
 *
 * description: creates an array of chars, initializes it with a specific char.
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *arr = malloc(sizeof(char) * size);
int i;

if (size == 0)
{
	return ('\0');
}

for (i = 0; i < (int) size; i++)
{
	arr[i] = c;
}

return (arr);
}
