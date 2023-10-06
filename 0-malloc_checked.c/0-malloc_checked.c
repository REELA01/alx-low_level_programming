#include "main.h"
/**
 * *malloc_checked - allocates memory
 * @b: parameter
 * Return: m value
*/
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);
	return (i);
}
