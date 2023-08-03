#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - entry function
 *
 * @head: pointer to list node
 *
 * description: return the sum of all the data(n)
 *
 * Return: Result
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
{
	return (0);
}

while (head != NULL)
{
	sum += head->n;
	head = head->next;
}

return (sum);
}
