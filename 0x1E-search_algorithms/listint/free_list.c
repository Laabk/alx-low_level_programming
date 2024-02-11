#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - this will Deallocates a singly linked list
 *
 *
 * @list: Pointer to the linked list to be freeed
 *
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
	node = list->next;
	free(list);
	free_list(node);
	}
}
