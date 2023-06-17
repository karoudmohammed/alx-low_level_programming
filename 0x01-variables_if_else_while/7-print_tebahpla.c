#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the alphapet in reverse'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;

for (a = 122; a > 96; a--)
{
	putchar(a);
}

putchar(10);

return (0);
}
