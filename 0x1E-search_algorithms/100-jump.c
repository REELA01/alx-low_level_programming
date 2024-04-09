#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jusp search algorithim
 * @array: pointer
 * @size: array size
 * @value: the wantd value
 * Return: number index
*/
int jump_search(int *array, size_t size, int value)
{
	int idx, i, j, pre;

	if (array == NULL || size == 0)
		return (-1);
	i = (int)sqrt((double)size);
	j = 0;
	pre = idx = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		j++;
		pre = idx;
		idx = j * i;
	} while (idx < (int)size && array[idx] < value);
	printf("Value found between indexes [%d] and [%d]\n", pre, idx);
	for (; pre <= idx && pre < (int)size; pre++)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
	}
	return (-1);
}
