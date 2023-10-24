#include "lists.h"
/**
 * *reverse_listint - reverses the linkedlist
 * @head: parameter
 * Return: backward value
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *b, *f;
	int i;

	b = NULL;
	f = NULL;
	for (i = 0; *head != NULL; i++)
	{
		f = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = f;
	}
	*head = b;
	return (b);
}
