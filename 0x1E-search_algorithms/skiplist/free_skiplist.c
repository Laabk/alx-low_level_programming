u#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - this will Deallocates the mem of
 * a singly linked list
 *
 *
 * @list: the ointer to the linked list to free
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
	node = list->next;
	free(list);
	free_skiplist(node);
	}
}
