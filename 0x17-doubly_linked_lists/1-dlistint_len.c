#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a linkedlist
 * @h: header poinetr
 * Return: elemnets num
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
