#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the alphapet except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;

for (a = 97; a < 123; a++)
{
	if (a == 101 || a == 113)
		continue;
	putchar(a);
}

putchar(10);

return (0);
}
