#include "lists.h"
/**
 * insert_dnodeint_at_index - insert newnode at desired index
 * @h: head pointer
 * @idx: desired location
 * @n: newnode data
 * Return: the list with new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *nod;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->prev = current;
	nod->next = current->next;
	current->next->prev = nod;
	current->next = nod;
	return (nod);
}
