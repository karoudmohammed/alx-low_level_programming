#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

if (argc < 3)
{
	printf("Error\n");
	return (1);
}

result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);

return (0);
}
