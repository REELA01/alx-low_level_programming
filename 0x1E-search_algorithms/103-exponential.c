#include "search_algos.h"
/**
  * _binary_search - binary search algorithim
  * @array: pointer
  * @lef: the left start
  * @rig: right start
  * @value: anted value
  * Return: value or -1
*/
int _binary_search(int *array, size_t lef, size_t rig, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (rig >= lef)
	{
		printf("Searching in array: ");
		for (i = lef; i < rig; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = lef + (rig - lef) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rig = i - 1;
		else
			lef = i + 1;
	}
	return (-1);
}
/**
  * exponential_search - exponential search algorithim
  * @array: pointer
  * @size: aary size
  * @value: wanted value
  * Return: value or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, rig;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	rig = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, rig);
	return (_binary_search(array, i / 2, rig, value));
}
