#include "lists.h"
/**
 * insert_nodeint_at_index - puts new node in a linked list
 * @head : pointer to head of linked list
 * @idx  : point of inertion of the new node
 * @n: value for the new node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnodes, *tmp = *head;
	unsigned int a;

	newnodes = malloc(sizeof(listint_t));
	if (!newnodes || !head)
	return (NULL);

	newnodes->n = n;
	newnodes->next = NULL;

	if (idx == 0)
	{
	newnodes->next = *head;
		*head = newnodes;
		return (newnodes);
	}
	for (a = 0; tmp && a < idx; a++)
	if (a == idx - 1)
	{
	newnodes->next = tmp->next;
	tmp->next = newnodes;
	return (newnodes);
	}
	else
	tmp = tmp->next;

	return (NULL);
}
