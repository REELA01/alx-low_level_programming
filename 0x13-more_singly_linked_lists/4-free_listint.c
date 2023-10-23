#include "lists.h"
/**
 * free_listint - free nodes
 * @head: parameter
 * Return: void value
*/
void free_listint(listint_t *head)
{
	listint_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c);
	}
}

