#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - entry function
 *
 * @head: pointer to list node
 *
 * description: delete the head node and return the integer
 *
 * Return: integer
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;

tmp = *head;

if (tmp->next == NULL)
{
	return (0);
}

n = tmp->n;

(*head) = tmp->next;

free(tmp);

return (n);
}
