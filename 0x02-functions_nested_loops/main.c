#include <string.h>
#include "main.h"

void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i;

for (i = 0; i < strlen(alpha); i++)
{
	_putchar(alpha[i]);
}
}
