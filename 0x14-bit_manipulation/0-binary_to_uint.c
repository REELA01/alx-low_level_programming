#include "main.h"
/**
 * binary_to_uint - binary to insint
 * @b: parameter
 * Return: n value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n <<= 1;
		n += *b++ - '0';
	}
	return (n);
}
