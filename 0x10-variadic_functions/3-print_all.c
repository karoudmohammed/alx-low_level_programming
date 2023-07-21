#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - entry function
 *
 * @format: separator
 *
 * description: function that prints anything.
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, count = 0;
char *str = NULL;
int flag = 0;

va_start(ap, format);

while (format[count] != '\0')
{
	count++;
}

while (i < count)
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);

			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("nil");
			}
			break;

		default:
			flag = 1;

	}

	if (i < (count - 1) && flag == 0)
	{
		printf(", ");
	}

	flag = 0;
	i++;
}

printf("\n");

va_end(ap);
}
