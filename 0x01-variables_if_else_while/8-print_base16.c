#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all the numbers of base 16'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int a;

for (n = 48; n < 58; n++)
	putchar(n);

for (a = 97; a < 103; a++)
	putchar(a);

putchar('\n');

return (0);
}
