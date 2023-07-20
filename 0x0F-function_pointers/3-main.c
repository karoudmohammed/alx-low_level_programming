#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry function
 *
 * @argc: size
 * @argv: array of arguments
 *
 * description: handle user input.
 *
 * Return: Int
 */

int main(int argc, char *argv[])
{
int (*pFunc)(int, int);
int result;

if (argc < 1 || argv == NULL)
{
	printf("Error\n");
	exit(98);
}

if (atoi(argv[3]) == 0)
{
	printf("Error\n");
	exit(100);
}

pFunc = get_op_func(argv[2]);

if (pFunc == NULL)
{
	printf("Error\n");
	exit(99);
}

result = pFunc(atoi(argv[1]), atoi(argv[3]));

printf("%d\n", result);

return (0);
}
