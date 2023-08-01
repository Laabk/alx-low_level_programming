#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes in linked list
 * @head: pointer to first element in list
 * @index: node to be deleted
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 unsigned int a = 0;
	listint_t *tmp = *head;
	listint_t *new = NULL;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}
	while (a < index - 1)
	{
	if (!tmp || !(tmp->next))
	{
	return (-1);
	}
	tmp = tmp->next;
	a++;
	}
	new = tmp->next;
	tmp->next = new->next;
	free(new);

	return (1);
}
