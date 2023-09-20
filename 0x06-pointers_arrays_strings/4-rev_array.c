#include "main.h"
/**
 * reverse_array - contact strings
 * @a: parameter
 * @n: parameter
 * Return: none
*/
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; j > i; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
