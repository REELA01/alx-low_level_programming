#include "lists.h"
/**
 * *find_listint_loop - finds the loop in a linkedlist
 * @head: parameter
 * Return: the loop value
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pre, *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (pre = head; pre != last; pre = pre->next)
			if (pre == last->next)
				return (last->next);
	}
	return (NULL);
}
