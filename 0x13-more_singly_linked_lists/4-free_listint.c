#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: required to freed 
 */
void free_listint(listint_t *head)
{
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
}
