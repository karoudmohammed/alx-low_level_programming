#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - entry function
 *
 * @head: pointer to list node
 * @index: int
 *
 * description: return the nth node of linked list
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node = NULL;

if (head == NULL)
{
	return (NULL);
}

while (head != NULL)
{
	if (index == i)
	{
		node = head;
		break;
	}
	head = head->next;
	i++;
}

return (node);
}
