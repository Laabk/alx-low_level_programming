#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *list
 * @size: pointer to the  head of the linked list to search.
 * @value: value to search for.
 * @list: value to search for.
 *
 * Return: If the value is not present or the head
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *jump;
	size_t step, step_size;

	if (list == NULL || size == 0)
	return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
	node = jump;
	for (step += step_size; jump->index < step; jump = jump->next)
	{
	if (jump->index + 1 == size)
	break;
	}
	printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
