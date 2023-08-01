#include "lists.h"

/**
 * find_listint_loop - checkes loops in linked list
 * @head: the linked list to search upon
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ab = head;
	listint_t *irr = head;

	if (!head)
	{
	return (NULL);
	}
	while (ab && irr && irr->next)
	{
	irr = irr->next->next;
	ab = ab->next;
	if (irr == ab)
	{
	ab = head;
	while
	(ab != irr)
	{
	ab = ab->next;
	irr = irr->next;
	}
	return (irr);
	}
	}
	return (NULL);
}
