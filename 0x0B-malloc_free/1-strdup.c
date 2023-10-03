#include "main.h"
/**
 * *_strdup - copy to an array
 * @str: parameter
 * Return: m value
*/
char *_strdup(char *str)
{
	int size = 0, i;
	char *m;

	if (str == 0)
		return (0);
	while (str[size] != '\0')
	{
		size++;
	}
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
		return (0);

	for (i = 0; i < size; i++)
		m[i] = str[i];
	return (m);
}
