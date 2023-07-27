#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: pointer to start of list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t = 1;

	if (h == NULL)
	{
	return (0);
	}
	while (h->next != NULL)
	{
	if (h->str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", h->len, h->str);

	h = h->next;
	node += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (node);
}
