#include "hash_tables.h"
/**
 * hash_table_print - prints key and value
 * @ht: hash table
 * Return: void value
*/
void hash_table_print(const hash_table_t *ht)
{
	char *com;
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL)
		return;
	printf("{");
	com = "";
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			printf("%s'%s': '%s'", com, curr->key, curr->value);
			com = ", ";
			curr = curr->next;
		}
	}
	printf("}\n");
}
