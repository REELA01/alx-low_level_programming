#include "search_algos.h"
/**
  * binary_search - bainary search algoreithim
  * @array: first element pointer
  * @size: elements of array
  * @value: wanted value
  * Return: the value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, lef, rig;

	if (array == NULL)
		return (-1);
	for (lef = 0, rig = size - 1; rig >= lef;)
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
