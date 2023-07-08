#include "main.h"
#include <stdio.h>

/**
 * main - entry function
 *
 * @argc: length of the array
 * @argv: array of command line arguments
 *
 * description: main function.
 *
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}

return (0);
}
