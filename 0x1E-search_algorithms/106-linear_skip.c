#include "search_algos.h"

/**
 * linear_skip - this func searches for value in a skip list
 * @list: list involved
 * @value: the value to search
 * Return: the index number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *seach;

	if (list == NULL)
	return (NULL);

	seach = list;

	do {
	list = seach;
	seach = seach->express;
	printf("Value checked at index ");
	printf("[%d] = [%d]\n", (int)seach->index, seach->n);
	} while (seach->express && seach->n < value);

	if (seach->express == NULL)
	{
	list = seach;
	while (seach->next)
	seach = seach->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

	while (list != go->next)
	{
	printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
	if (list->n == value)
	return (list);
	list = list->next;
	}
	return (NULL);
}
