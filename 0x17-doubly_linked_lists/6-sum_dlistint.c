#include "lists.h"

/**
 * sum_dlistint - this func returns the sum of all the data (n)
 * of a doubly linked list
 * @head: the list head
 * Return: total of data
 */

int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			tot += head->n;
			head = head->next;
		}
	}

	return (tot);
}
