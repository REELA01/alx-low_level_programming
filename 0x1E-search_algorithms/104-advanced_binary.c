#include "search_algos.h"
/**
  * binary_rec - advanced binary recursive
  * @array: pointer
  * @lef: left start
  * @rig: right start
  * @value: wanted value
  * Return: value or -1
*/
int binary_rec(int *array, size_t lef, size_t rig, int value)
{
	size_t i;

	if (rig < lef)
		return (-1);
	printf("Searching in array: ");
	for (i = lef; i < rig; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = lef + (rig - lef) / 2;
	if (array[i] == value && (i == lef || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_rec(array, lef, i, value));
	return (binary_rec(array, i + 1, rig, value));
}
/**
  * advanced_binary - advanced bianry search
  * @array: pointer
  * @size: array size
  * @value: wanted value
  * Return: teh value or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
