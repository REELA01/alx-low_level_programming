#include "main.h"
/**
 * *_strncpy - contact strings
 * @dest: parameter
 * @src: parameter
 * @n: src limit
 * Return: dest value
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0, j = 0; j < n, dest[i] != '\0' && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i + j] != '\0';
	return (dest);
}
