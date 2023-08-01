#include "lists.h"

/**
 * listint_len - entry function
 *
 * @h: pointer to list
 *
 * description: returns the numbers of elements
 *
 * Return: Size
 */

size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}

return (count);
}
