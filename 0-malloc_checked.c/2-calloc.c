#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_calloc - zeroing strings
 * @nmemb: parameter
 * @size: parameter
 * Return: p value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
