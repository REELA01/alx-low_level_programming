#include "main.h"
/**
 * *_strcat - contact strings
 * @dest: parameter
 * @src: parameter
 * Return: dest value
*/
char *_strcat(char *dest, char *src)
{
	int n = 0, m;

	while (dest[n])
		n++;
	for (m = 0; src[m]; m++)
	{
		dest[n++] = src[m];
	}
	return (dest);
}
