#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - entry function
 *
 * @head: head of the list
 *
 * description: frees a list_t
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
if (head == NULL)
{
	return (0);
}
free_list(head->next);
free(head->str);
free(head);
}
