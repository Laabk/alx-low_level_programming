#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements in a linked list
 * @h: pointer to the the start of list_t list
 * Return: number of elements in the b pointer
 */

size_t list_len(const list_t *h)
{
size_t nodes;

nodes = 0;
while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}
