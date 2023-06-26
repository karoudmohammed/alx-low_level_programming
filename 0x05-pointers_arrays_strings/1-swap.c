#include "main.h"

/**
 * swap_int - entry function
 *
 * @a: a pointer to an int
 * @b: another pointer to an int
 *
 * description: function that swaps the values of two integers.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
