#include "hash_tables.h"
/**
 * hash_table_delete - delete ht
 * @ht: hashtable
 * Return: void value
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr1, *curr2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr1 = ht->array[i];
		while ((curr2 = curr1) != NULL)
		{
			curr1 = curr1->next;
			free(curr2->key);
			free(curr2->value);
			free(curr2);
		}
	}
	free(ht->array);
	free(ht);
}
