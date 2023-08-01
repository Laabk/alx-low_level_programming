#include "lists.h"
/**
 * pop_listint - deletes the head node involved
 * @head : pointer to the head of linked list
 * Return: head node or 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nums;

	if (!head || !*head)
	{
	return (0);
	}

	nums = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nums);
}
