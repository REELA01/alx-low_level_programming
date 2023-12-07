#include "lists.h"
/**
 * get_dnodeint_at_index - get location of node at index
 * @head: head pointer
 * @index: location
 * Return: the loc of node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
