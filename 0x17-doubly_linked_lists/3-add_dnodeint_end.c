#include "lists.h"

/**
 * add_dnodeint_end - this func adds created node at the end
 * of a dlistint_t list
 * @head: the list head
 * @n: value
 * Return: an address of the new creted element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *nwnode;

	nwnode = malloc(sizeof(dlistint_t));
	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;
	nwnode->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nwnode;
	}
	else
	{
		*head = nwnode;
	}

	nwnode->prev = h;
	return (nwnode);
}
