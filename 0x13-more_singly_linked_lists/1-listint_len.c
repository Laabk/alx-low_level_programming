#include "lists.h"

/**
 * listint_len - counts nodes in linked list
 * @h: head
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
	num++;
	list = list->next;
	}
	return (num);
}
