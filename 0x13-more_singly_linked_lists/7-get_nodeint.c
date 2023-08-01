#include "lists.h"
/**
 * get_nodeint_at_index - works on given node in a
 * linked list and returns it nodes
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = head;

	while (tmp && n < index)
	{
	tmp = tmp->next;
	n++;
	}

	return (tmp ? tmp : NULL);
}
