#include "main.h"
/**
 * *_strcpy - copies from an array to another
 * @dest: parameter
 * @src: parameter
 * Return: dest value
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = sec[i];
	}
	return (dest);
}
