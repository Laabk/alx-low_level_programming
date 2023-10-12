#include "lists.h"

/**
 * get_dnodeint_at_index - this func returns the
 * nth node of a dlistint_t linked list
 * @head: the list head
 * @index: the index of a ele
 * Return: an nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int d = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (d == index)
			break;
		head = head->next;
		d++;
	}

	return (head);
}
