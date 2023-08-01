#include "lists.h"

/**
 * add_nodeint_end - adds nodes in linked list
 * @head: pointer to first element in list
 * @n: new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodes;
	listint_t *list = *head;

	{
	newnodes = malloc(sizeof(listint_t));
	if (!newnodes)
	return (NULL);

	newnodes->n = n;
	newnodes->next = NULL;
	
	if (*head == NULL)
	{
	*head = newnodes;
	return (newnodes);
	}

	while (list->next)
	list = list->next;

	list->next = newnodes;
	}

	return (newnodes);
}
