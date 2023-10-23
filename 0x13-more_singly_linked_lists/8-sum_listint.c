#include "lists.h"
/**
 * sum_listint - print the sum of data
 * @head: parameter
 * Return: sum value
*/
int sum_listint(listint_t *head)
{
	int sum = 0, i;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
