#include "main.h"
/**
 * get_bit - find the index
 * @n: parameter
 * @index: parameter
 * Return: b value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > sizeof(n) * 8)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
