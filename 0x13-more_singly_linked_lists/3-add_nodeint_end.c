#include "lists.h"
/**
 * *add_nodeint_end - node at end
 * @head: parameter
 * @n: parameter
 * Return: nod value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nod, *current;

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	current = *head;
	if (*head == NULL)
		*head = nod;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = nod;
	}
	return (nod);
}
