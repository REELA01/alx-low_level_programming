#include "lists.h"
/**
 * print_listint - prints elements
 * @h: parameter
 * Return: size vlaue
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
