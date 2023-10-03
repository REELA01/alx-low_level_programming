#include "main.h"
/**
 * *create_array - initializes array with a specific char
 * @size: parameter
 * @c: parameter
 * Return: i value
*/
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
