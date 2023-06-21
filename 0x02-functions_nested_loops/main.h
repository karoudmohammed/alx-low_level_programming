#include <unistd.h>
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i;

for (i = 0; i < strlen(alpha); i++)
{
	_putchar(alpha[i]);
}
}
