#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - entry function
 *
 * @name: pointer to char
 * @f: pointer to function
 *
 * description: Write a function that prints a name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
