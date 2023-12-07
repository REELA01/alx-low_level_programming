#include "lists.h"
/**
 * print_dlistint - Prints all the elements list
 * @h: head pointer
 * Return: nodes num
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nod);
}
