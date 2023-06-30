#include "main.h"
#include <stdio.h>

/**
 * reverse_array - entry function
 *
 * @a: a pointer to an array
 * @n: size of array
 *
 * description: function that reverses the content of an array of integers.
 *
 */

void reverse_array(int *a, int n)
{
int i, j;
int temp;
int mid = n / 2;

for (i = n - 1, j = 0; i >= mid; i--, j++)
{
	temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}
}
