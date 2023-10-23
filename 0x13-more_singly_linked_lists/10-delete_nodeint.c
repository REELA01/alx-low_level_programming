#include "lists.h"
/**
 * delete_nodeint_at_index - delete node in index
 * @head: parameter
 * @index: parameter
 * Return: -1 if failed or 1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, nxt;
	unsigned int i;

	current = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}
	if (current == NULL || (current->next == NULL && index != 0))
	{
		return (-1);
	}
	nxt = current->next;
	if (index != 0)
	{
		current->next = nxt->next;
		free(nxt);
	}
	else
	{
		free(current);
		*head = nxt;
	}
	return (1);
}
