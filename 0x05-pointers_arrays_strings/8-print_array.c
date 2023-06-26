#include "main.h"
#include <stdio.h>

/**
 * print_array - entry function
 *
 * @a: a pointer to an array
 * @n: size of array
 *
 * description: function that prints n elements of an array of integers.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i != n - 1)
		printf(", ");
}
printf("\n");
}
