#include "hash_tables.h"
/**
 * hash_table_set - set element to hash table
 * @ht: hashtable
 * @key: key of value to set
 * @value: set value
 * Return: int val 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nn;
	char *va;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	va = strdup(value);
	if (va == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = va;
			return (1);
		}
	}
	nn = malloc(sizeof(hash_node_t));
	if (nn == NULL)
	{
		free(va);
		return (0);
	}
	nn->key = strdup(key);
	if (nn->key == NULL)
	{
		free(nn);
		return (0);
	}
	nn->value = va;
	nn->next = ht->array[index];
	ht->array[index] = nn;
	return (1);
}
