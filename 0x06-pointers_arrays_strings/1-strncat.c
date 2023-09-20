#include "main.h"
/**
 * *_strncat - contact strings
 * @dest: parameter
 * @src: parameter
 * @n: most bytes from src
 * Return: dest value
*/
char *_strncat(char *dest, char *src, int n)
{
	int m, t;

	t = 0;
	while (dest[t])
		t++;
	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[t + m] = src[t];
	dest[t + m] = '\0';
	return (dest);
}
