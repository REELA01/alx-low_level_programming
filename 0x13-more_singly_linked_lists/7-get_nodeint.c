#include "lists.h"
/**
 * *get_nodeint_at_index - get node of index
 * @head: parameter
 * @index: wanted index parameter
 * Return: node value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
