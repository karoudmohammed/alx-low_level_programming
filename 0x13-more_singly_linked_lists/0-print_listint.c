#include "lists.h"
#include <stdio.h>

/**
 * print_listint - entry function
 *
 * @h: pointer to list
 *
 * description: prints all the elements of a list of ints
 *
 * Return: Size
 */

size_t print_listint(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
	count++;
	printf("%d\n", h->n);
	h = h->next;
}

return (count);
}
