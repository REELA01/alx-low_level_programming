#include "search_algos.h"
/**
 * linear_skip - sech by linear skip
 * @list: the list
 * @value: vwanted value
 * Return: the index
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jump;

	if (list == NULL)
		return (NULL);
	jump = list;
	do {
		list = jump;
		jump = jump->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)jump->index, jump->n);
	} while (jump->express && jump->n < value);
	if (jump->express == NULL)
	{
		list = jump;
		while (jump->next)
			jump = jump->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)jump->index);
	while (list != jump->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
