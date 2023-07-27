#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add new nodes to the start of a linked list
 * @head: pointer to the start of list_t list
 * @st: the new string to be added into the node
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *st)
{
	list_t *new;
	unsigned int len = 0;

	while (st[len])
	len++;

	new = malloc(sizeof(list_t));
	{
	if (!new)
	return (NULL);
	}

	new->str= strdup(st);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
