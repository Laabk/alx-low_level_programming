#include <stdlib.h>
#include "../search_algos.h"

void free_list(listint_t *list);

/**
 * create_list - Cthis creates a single linked list
 *
 * @array: the Pointer to the array to use to fill the list
 * @size: Size of array
 * Return: pointer to the head of the created list
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *lst, *node;

	lst = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(lst);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = lst;
		lst = node;
	}
	return (lst);
}
