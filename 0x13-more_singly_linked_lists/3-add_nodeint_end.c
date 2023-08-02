#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - entry function
 *
 * @head: pointer to list node
 * @n: integer
 *
 * description: add new node at the end of list
 *
 * Return: Size
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

new = malloc(sizeof(listint_t));
last = *head;

if (new == NULL)
{
	return (NULL);
}

new->n = n;
new->next = NULL;

if (last == NULL)
{
	(*head) = new;
	return (*head);
}

while (last->next != NULL)
{
	last = last->next;
}

last->next = new;

return (last);
}
