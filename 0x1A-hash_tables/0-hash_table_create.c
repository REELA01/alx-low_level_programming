#include "hash_tables.h"
/**
 * hash_table_create - create hatable
 * @size: size ht array
 * Return: hashtable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tb;
	unsigned long int i;

	hash_tb = malloc(sizeof(hash_table_t));
	if (hash_tb == NULL)
		return (NULL);
	hash_tb->size = size;
	hash_tb->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tb->array == NULL)
	{
		free(hash_tb);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_tb->array[i] = NULL;
	return (hash_tb);
}
