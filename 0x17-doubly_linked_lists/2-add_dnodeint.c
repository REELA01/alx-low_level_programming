#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a linkedlist
 * @head: header poineter
 * @n: new node data
 * Return: new nod address
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nod;

	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->prev = NULL;
	nod->next = *head;
	if (*head != NULL)
		(*head)->prev = nod;
	*head = nod;
	return (nod);
}

