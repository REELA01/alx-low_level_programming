#include "lists.h"
/**
 * *add_node_end - add node at end
 * @head: parameter
 * @str: parameter
 * Return: node value
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *c;
	size_t s;

	for (s = 0; str[s]; s++)
		;
	nn = malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);
	nn->len = s;
	nn->next = NULL;
	if (*head == NULL)
		*head = nn;
	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = nn;
	}
	return (nn);
}
