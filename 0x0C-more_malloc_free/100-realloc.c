#include "main.h"
/**
 * *_realloc - realocate according to new size
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: void value
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pointer + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pointer);
}
