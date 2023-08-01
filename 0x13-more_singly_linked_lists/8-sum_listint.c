#include "lists.h"
/**
 * sum_listint - adss of all the data involved in linked list
 * @head : pointer to the head of the list
 * Return: sumation of all the data.
 */

int sum_listint(listint_t *head)
{
	int adds = 0;
	listint_t *tmp = head;

	while (tmp)
	{
	adds += tmp->n;
	tmp = tmp->next;
	}

	return (adds);
}
