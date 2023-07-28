#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - entry function
 *
 * @h: head of the list
 *
 * description: function that prints elements of a list_t list.
 *
 * Return: Size
 */

size_t print_list(const list_t *h)
{
int count = 0;

while (h != NULL)
{
	count++;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}

	h = h->next;
}

return (count);
}
