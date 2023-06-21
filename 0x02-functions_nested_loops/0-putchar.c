#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c);

int main(void)
{
char str[] = "_putchar";
unsigned int i;

for (i = 0; i < strlen(str); i++)
{
	_putchar(str[i]);
}

_putchar('\n');

return (0);
}
