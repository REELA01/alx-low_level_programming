#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jump list algorithim
 * @list: the list
 * @size: array size
 * @value: wanted value
 * Return: number index
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, i, j;
	listint_t *pre;

	if (list == NULL || size == 0)
		return (NULL);
	i = (size_t)sqrt((double)size);
	idx = 0;
	j = 0;
	do {
		pre = list;
		j++;
		idx = j * i;
		while (list->next && list->index < idx)
			list = list->next;
		if (list->next == NULL && idx != list->index)
			idx = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
	} while (idx < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)pre->index, (int)list->index);
	for (; pre && pre->index <= list->index; pre = pre->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)pre->index, pre->n);
		if (pre->n == value)
			return (pre);
	}
	return (NULL);
}
