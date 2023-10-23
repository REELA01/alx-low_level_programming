#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: parameter
 * Return: data value
*/
int pop_listint(listint_t **head)
{
	listint_t *hd, *current;
	int data;

	if (*head == NULL)
		return (0);
	current = *head;
	data = current->n;
	hd = current->next;
	free(current);
	*head = hd;
	return (data);
}
