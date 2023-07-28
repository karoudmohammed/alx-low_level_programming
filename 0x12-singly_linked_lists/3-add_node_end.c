#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - entry function
 *
 * @head: head of the list
 * @str: string
 *
 * description: add a new node at the end of a list_t.
 *
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
unsigned int length = 0;
list_t *last = *head;

node = malloc(sizeof(list_t));

if (node == NULL)
{
	return (NULL);
}

while (str[length] != '\0')
{
	length++;
}

node->str = strdup(str);
node->len = length;
node->next = NULL;

if (*head == NULL)
{
	*head = node;
	return (*head);
}

while (last->next != NULL)
{
	last = last->next;
}

last->next = node;

return (last);
}
