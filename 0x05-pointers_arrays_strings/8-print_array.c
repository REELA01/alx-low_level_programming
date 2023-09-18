#include "main.h"
#include <stdio.h>
/**
 * print_array - takes a pointer to an int
 * @a: parameter
 * @n: array elements
 * Return: nothing
*/
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (t != n - 1)
			printf("%d, ", a[t]);
		else
			printf("%d", a[t]);
	}
	printf("\n");
}
