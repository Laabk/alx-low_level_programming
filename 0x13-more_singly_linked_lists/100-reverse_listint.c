#include "lists.h"

/**
 * reverse_listint - reverses any linked list
 * @head: pointer to first node in liknedlist
 * Return: first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *rev = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = rev;
	rev = *head;
	*head = next;
	}

	*head = rev;
	return (*head);
}
