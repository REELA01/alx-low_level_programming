#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at index
 * @head: head pointer
 * @index: desired location to delete
 * Return: inr value -1 or 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
