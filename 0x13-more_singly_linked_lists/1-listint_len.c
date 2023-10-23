#include "lists.h"
/**
 * listint_len - num of elements
 * @i: parameter
 * Return: i value
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
