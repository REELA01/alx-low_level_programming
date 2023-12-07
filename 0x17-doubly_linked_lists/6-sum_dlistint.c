#include "lists.h"
/**
 * sum_dlistint - sum of data in linked list
 * @head: head pointer
 * Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
