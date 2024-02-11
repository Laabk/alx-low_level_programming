#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include "../search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - this will Initializes the express 
 * lane of the linked list
 *
 *
 * @list: the ointer to the head node of the list
 * @size: the number of nodes in the list
 *
 */
void init_express(skiplist_t *list, size_t size)
{
	size_t d;
	const size_t step = sqrt(size);
	skiplist_t *s;

	for (s = list, d = 0; d < size; ++d, list = list->next)
	{
	if (d % step == 0)
	{
	s->express = list;
	s = list;
	}
	}
}

/**
 * create_skiplist - this will creeate a single linked list
 *
 *
 * @array: the pointer to array used to fill the list
 * @size: the size of the array
 *
 *
 * Return: pointer to the head of new list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *lst, *node;
	size_t siz;

	lst = NULL;
	siz = size;
	while (array && size--)
	{
	node = malloc(sizeof(*node));
	if (!node)
	{
	free_skiplist(lst);
	return (NULL);
	}
	node->n = array[size];
	node->index = size;
	node->express = NULL;
	node->next = lst;
	lst = node;
	}
	init_express(lst, siz);
	return (lst);
}
