#include “lists.h”
/**
 * *add_node_end - add node at end
 * @head: parameter
 * @str: parameter
 * Return: node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t nn, c;
	size_t s;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	for (s = 0; str[s]; s++)
		;
	nn->len = s;
	nn->next == NULL;
	c = *head;
	if (c == NULL)
	{
		*head = nn;
	}
	else
	{
		while (c->next != NULL)
			c = c->next;
		c->next = nn;
	}
	return (*head);
}
