#include "lists.h"

/**
 * free_listint_safe - free links list
 * @h: first node in linked list
 * Return: list of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int res;
	size_t size;
	listint_t *tmp;

	size = 0;

	if (!h || !*h)
	{
	return (0);
	}
	while (*h)
	{
	res = *h - (*h)->next;
	if (res > 0)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	size++;
	}
	else
	{
	free(*h);
	*h = NULL;
	size++;
	break;
	}
	}
	*h = NULL;
	return (size);
}
