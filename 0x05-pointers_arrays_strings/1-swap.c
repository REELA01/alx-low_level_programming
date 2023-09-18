#include "main.h"
/**
 * swap_int - takes pointers to an int and swap
 * @a: parameter
 * @b:parameter
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
