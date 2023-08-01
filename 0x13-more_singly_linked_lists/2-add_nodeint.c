#include "lists.h"

/**
 * add_nodeint - adds new nodes in the beginning of a linked list
 * @head: pointer to first node of list
 * @n: new node
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodes;

	newnodes = malloc(sizeof(listint_t));
	if (!newnodes)
	return (NULL);

	newnodes->n = n;
	newnodes->next = *head;
	newnodes = *head;

	return (newnodes);
}
