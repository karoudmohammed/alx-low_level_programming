#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the numbers using putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
	putchar(n);
}

putchar(10);

return (0);
}
