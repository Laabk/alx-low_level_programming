#include "lists.h"

/**
 * print_listint_safe - prints link list with safe loops
 * @head: pointer to first node the linked list
 * Return: newnode
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t newnode, iter = 0;
	const listint_t *temp = NULL;
	const listint_t *last = NULL;

	temp = head;
	while (temp)
	{
	printf("[%p] %d\n", (void *)temp, temp->n);
	iter++;
	temp = temp->next;
	last = head;
	newnode = 0;
	while (newnode < iter)
	{
	if (temp == last)
	{
	printf("-> [%p] %d\n", (void *)temp, temp->n);
	return (iter);
	}
	last = last->next;
	newnode++;
	}
	if (!head)
	exit(98);
	}
	return (iter);
}
