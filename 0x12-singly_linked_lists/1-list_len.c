#include "lists.h"
/**
 * list_len - length of ll
 * @h: header pointer
 * Return: num of elements
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
