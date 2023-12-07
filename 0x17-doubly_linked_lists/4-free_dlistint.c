#include "lists.h"
/**
 * free_dlistint - free list
 * @head: header pointer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
