#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
int result;
int i;

if (argc < 1)
{
	printf("0\n");
	return (0);
}

for (i = 1; i < argc; i++)
{
	if (isalpha(*argv[i]) > 0)
	{
		printf("Error\n");
		return (1);
	}

	result += atoi(argv[i]);

}

printf("%d\n", result);

return (0);
}
