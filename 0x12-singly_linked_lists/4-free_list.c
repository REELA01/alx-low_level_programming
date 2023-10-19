#include "lists.h"
/**
 * free_list - free node
 * @head: parameter
 * Return: none
*/
void free_list(list_t *head)
{
	list_t *c;

	while ((c == head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
