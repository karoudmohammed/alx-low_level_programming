#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'print a string without stdio library'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));

	return (1);
}
