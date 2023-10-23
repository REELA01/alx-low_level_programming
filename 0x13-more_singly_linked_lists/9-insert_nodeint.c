#include "lists.h"
/**
 * *insert_nodeint_at_index - node at idx
 * @head: parameter
 * @idx: parameter
 * @n: element
 * Return: node value
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *current;

	if (head == NULL)
		return (0);
	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (0);
	nd->next = NULL;
	nd->n = n;

	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}
	current = *head;
	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(nd);
			return (NULL);
		}
	}
	nd->next = current->next;
	current->next = nd;

	return (nd);
}
