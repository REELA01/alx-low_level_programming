#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagsums
 * @a: parameter
 * @size: parameter
 * Return: none value
*/
void print_diagsums(int *a, int size)
{
	int i, c1 = 0, c2 = 0;

	for (i = 0; i < size; i++)
	{
		c1 += a[i];
		c2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
