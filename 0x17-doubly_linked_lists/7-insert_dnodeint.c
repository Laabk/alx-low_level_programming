#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nwnode, *head;
	unsigned int d;

	nwnode = NULL;
	if (idx == 0)
		nwnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		d = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (d == idx)
			{
				if (head->next == NULL)
					nwnode = add_dnodeint_end(h, n);
				else
				{
					nwnode = malloc(sizeof(dlistint_t));
					if (nwnode != NULL)
					{
						nwnode->n = n;
						nwnode->next = head->next;
						nwnode->prev = head;
						head->next->prev = nwnode;
						head->next = nwnode;
					}
				}
				break;
			}
			head = head->next;
			d++;
		}
	}

	return (nwnode);
}
