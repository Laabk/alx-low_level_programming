#include "lists.h"

/**
 * print_listint - prints elements in linked list
 * @h: head list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nums = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		nums++;
		list = list->next;
	}
	return (nums);
}
