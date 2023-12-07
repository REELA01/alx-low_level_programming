#include "lists.h"
/**
 * add_dnodeint_end - Adds a new nod at the end of  doubley linkedlist
 * @head: ehader pointer
 * @n: the newnode data
 * Return: the list with new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nod, *last;

	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	if (*head == NULL)
	{
		nod->prev = NULL;
		*head  = nod;
		return (nod);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = nod;
	nod->prev = last;
	return (nod);
}
