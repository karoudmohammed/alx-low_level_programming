#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - entry function
 *
 * @h: head of the list
 *
 * description: function returns the n* of elements in a linked list.
 *
 * Return: Size
 */

size_t list_len(const list_t *h)
{
int count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}

return (count);
}
