#include "main.h"
/**
 * set_bit - to dit index 1
 * @n: parameter
 * @index: parameter
 * Return: int value
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	*n |= 1L << index;
	return (1);
}
