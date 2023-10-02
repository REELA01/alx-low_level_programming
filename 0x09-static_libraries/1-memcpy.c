#include "main.h"
/**
 * *_memcpy - copy strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
