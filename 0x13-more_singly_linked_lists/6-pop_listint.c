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

if (head == NULL)
{
	return (0);
}

tmp = *head;

n = tmp->n;

(*head) = tmp->next;

free(tmp);

return (n);
}
