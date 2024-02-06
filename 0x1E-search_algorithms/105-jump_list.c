#include "search_algos.h"
#include <math.h>

/**
 * jump_list - this func searches for value in array of
 * integers using the Jump search algorithm involved
 * @list: list invloved
 * @size: the array size
 * @value: value to search
 *
 * Return: the index of number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, q, bw;
	listint_t *rev;

	if (list == NULL || size == 0)
		return (NULL);

	bw = (size_t)sqrt((double)size);
	idx = 0;
	q = 0;

	do {
	prev = list;
	q++;
	idx = q * bw;

	while (list->next && list->idx < idx)
	list = list->next;

	if (list->next == NULL && idx != list->idx)
	idx = list->idx;

	printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)rev->idx, (int)list->idx);
	for (; rev && rev->idx <= list->idx; rev = rev->next)
	{
	printf("Value checked at index [%d] = [%d]\n", (int)rev->idx, rev->n);
	if (rev->n == value)
	return (rev);
	}
	return (NULL);
}
