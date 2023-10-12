#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *he1, *he2;
	unsigned int d;

	he1 = *head;

	if (he1 != NULL)
		while (he1->prev != NULL)
			he1 = he1->prev;

	while (he1 != NULL)
	{
		if (d == index)
		{
			if (d == 0)
			{
				*head = he1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				he2->next = he1->next;

				if (he1->next != NULL)
					he1->next->prev = he2;
			}

			free(he1);
			return (1);
		}
	}

	return (-1);
}
