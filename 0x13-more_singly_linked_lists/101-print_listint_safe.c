#include "lists.h"
/**
 * **_r - realocate the linked list
 * @list: parameter
 * @s: parameter
 * @new: parameter
 * Return: newlist value
*/
const listint_t **_r(const listint_t **list, size_t s, const listint_t *new)
{
	const listint_t **newl;
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
 * print_listint_safe - print linked list
 * @head: pointer
 * Return: number value
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < number; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (number);
			}
		}
		number++;
		list = _r(list, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (number);
}
