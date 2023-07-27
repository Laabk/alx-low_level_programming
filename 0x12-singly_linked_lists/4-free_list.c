#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list in linked list
 * @head: list_t list that is to be freed
 */
void free_list(list_t *head)
{
{
list_t *nodes;

while (head)
{
nodes = head->next;
free(head->str);
free(head);
head = nodes;
}
}
}
