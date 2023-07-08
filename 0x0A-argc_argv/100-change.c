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
int cents, i, reminder, change;
int coins[5] = {25, 10, 5, 2, 1};

if (argc == 1)
{
	printf("Error\n");
	return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
	printf("0\n");
	return (0);
}

change = 0;

for (i = 0; i < 5; i++)
{
	reminder = cents % coins[i];
	if (reminder > 0)
	{
		change += cents / coins[i];
		cents = reminder;
	}

	if (reminder == 0)
	{
		change += cents / coins[i];
		break;
	}
}

printf("%d\n", change);

return (0);
}
