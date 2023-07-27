#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to the end of linked list
 * @head: pointer to the start of list_t list
 * @str: string to put in the new node
 * Return: address of news element, or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
{
	list_t *first_nodes, *second_nodes;
	size_t a;

	first_nodes = malloc(sizeof(list_t));
	if (first_nodes == NULL)
	{
	return (NULL);
	}
	first_nodes->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	first_nodes->len = a;
	first_nodes->next = NULL;
	second_nodes = *head;

	if (second_nodes == NULL)
	{
	*head = first_nodes;
	}
	else
	{
	while (second_nodes->next != NULL)
	second_nodes = second_nodes->next;
	second_nodes->next = first_nodes;
	}

	return (*head);
}
}
