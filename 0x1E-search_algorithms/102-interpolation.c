#include "search_algos.h"
/**
 * interpolation_search - interpolation search algorthim
 * @array: pointer
 * @size: array size
 * @value: wanted value
 * Return: the index of the value or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, i, j;

	if (array != NULL && size > 0)
	{
		l = 0;
		j = size - 1;
		while (array[l] != array[j])
		{
			i = l + (((double)(j - l) / (array[j] - array[l])) * (value - array[l]));
			if (j < l || i > j)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] < value)
				l = i + 1;
			else if (array[i] > value)
				j = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}
