#include "main.h"
/**
 * flip_bits - count fliped bit
 * @n: parameter
 * @m: parameter
 * Return: count value
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;
	int c = 0;

	while (xr > 0)
	{
		c += (xr & 1);
		xr >>= 1;
	}
	return (c);
}
