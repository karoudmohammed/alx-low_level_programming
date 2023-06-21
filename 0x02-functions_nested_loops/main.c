#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - write each alphabet using _putchar function
 *
 * Description: 'print alphabet using function'
 *
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i;

for (i = 0; i < strlen(alpha); i++)
{
	_putchar(alpha[i]);
}
}
