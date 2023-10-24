#include "lists.h"
/**
 * **_re - realocate the nodes
 * @list: parameter
 * @s: parameter
 * @new: parameter
 * Return: newlist value
*/
listint_t **_re(listint_t **list, size_t s, listint_t *new)
{
	listint_t **newl;
	size_t i;

	newl = malloc(s * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		newl[i] = list[i];
	newl[i] = new;
	free(list);

	return (newl);
}
/**
 * free_listint_safe - frees the linkedlist
 * @head: pointer
 * Return: number value
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, number = 0;
	listint_t **list = NULL, *nxt;

	if (head == NULL || *head == NULL)
		return (number);
	while (*head != NULL)
	{
		for (i = 0; i < number; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (number);
			}
		}
		number++;
		list = _re(list, number, *head);
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}
	free(list);

	return (number);
}
