#include "lists.h"
/**
 * free_list - free node
 * @head: parameter
 * Return: none
*/
void free_list(list_t *head)
{
	list_t *c, *nn;

	c = head;
	while (c != NULL)
	{
		nn = c->next;
		free(c->str);
		free(c);
		c = nn;
	}
}
