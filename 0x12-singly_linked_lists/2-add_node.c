#include “lists.h”
/**
 * *add_node - add at beg
 * @head: parameter
 * @str: parameter
 * Return: head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	size_t s;

	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	for (s = 0; str[s]; s++)
		;
	nn->len = s;
	nn->next = *head;
	*head = nn;
	return (*head);
}
