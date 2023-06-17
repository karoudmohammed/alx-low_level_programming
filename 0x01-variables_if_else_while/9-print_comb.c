#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: 'print only digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int s;

for (s = 0; s < 128; s++)
	if (isdigit(s))
	{
		putchar(s);
		if (s != 57)
			putchar(44);
		putchar(32);
	}
putchar('\n');

return (0);
}
