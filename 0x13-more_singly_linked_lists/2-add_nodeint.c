#include "lists.h"
/**
 * *add_nodeint - node at beg
 * @head: parameter
 * @n: new node data
 * Return: nod value
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = *head;
	*head = nod;
	return (nod);
}
