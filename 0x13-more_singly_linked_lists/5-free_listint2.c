#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - entry function
 *
 * @head: pointer to list node
 *
 * description: frees a listint_t list.
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t *node;

while (*head != NULL)
{
	node = (*head)->next;
	free(*head);
	*head = node;
}

free(*head);
*head = NULL;
}
