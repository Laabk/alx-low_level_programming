#include "lists.h"

/**
 * add_dnodeint - this creats new node at the beginning
 * of a dlistint_t list
 * @head: the list head
 * @n: value
 * Return: an address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nwnode, *h;

	nwnode = malloc(sizeof(dlistint_t));
	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;
	nwnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nwnode->next = h;

	if (h != NULL)
		h->prev = nwnode;

	*head = nwnode;

	return (nwnode);
}
