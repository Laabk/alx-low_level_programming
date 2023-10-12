#include "lists.h"

/**
 * dlistint_len - this func return the number of elements in
 * a double linked list
 *
 * @h: the list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
