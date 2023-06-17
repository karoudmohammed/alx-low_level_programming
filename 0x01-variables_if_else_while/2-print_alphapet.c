#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the alphapet'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;

for (a = 97; a < 123; a++)
{
	putchar(a);
}

putchar(10);

return (0);
}
