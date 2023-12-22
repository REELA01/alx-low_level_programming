#include "hash_tables.h"
/**
 * shash_table_create - create sortes HT
 * @size: size of HT
 * Return: HT or null
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;
	return (hash_t);
}
/**
 * shash_table_set - to add to soreted hasht
 * @ht: hashtable
 * @key: ket to added value
 * @value: the value
 * Return: int value 0 or 1
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nn, *curr;
	char *va;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	va = strdup(value);
	if (va == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->shead;
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = va;
			return (1);
		}
		curr = curr->snext;
	}
	nn = malloc(sizeof(shash_node_t));
	if (nn == NULL)
	{
		free(va);
		return (0);
	}
	nn->key = strdup(key);
	if (nn->key == NULL)
	{
		free(va);
		free(nn);
		return (0);
	}
	nn->value = va;
	nn->next = ht->array[index];
	ht->array[index] = nn;
	if (ht->shead == NULL)
	{
		nn->sprev = NULL;
		nn->snext = NULL;
		ht->shead = nn;
		ht->stail = nn;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nn->sprev = NULL;
		nn->snext = ht->shead;
		ht->shead->sprev = nn;
		ht->shead = nn;
	}
	else
	{
		curr = ht->shead;
		while (curr->snext != NULL && strcmp(curr->snext->key, key) < 0)
			curr = curr->snext;
		nn->sprev = curr;
		nn->snext = curr->snext;
		if (curr->snext == NULL)
			ht->stail = nn;
		else
			curr->snext->sprev = nn;
		curr->snext = nn;
	}
	return (1);
}
/**
 * shash_table_get - get value with desiered key
 * @ht: hashtable
 * @key: key of val
 * Return: null or key matched
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *nn;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	nn = ht->shead;
	while (nn != NULL && strcmp(nn->key, key) != 0)
		nn = nn->snext;
	return ((nn == NULL) ? NULL : nn->value);
}
/**
 * shash_table_print - print normal sorted order
 * @ht: hashtable
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nn;

	if (ht == NULL)
		return;
	nn = ht->shead;
	printf("{");
	while (nn != NULL)
	{
		printf("'%s': '%s'", nn->key, nn->value);
		nn = nn->snext;
		if (nn != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print int reverese
 * @ht: hashtable
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nn;

	if (ht == NULL)
		return;
	nn = ht->stail;
	printf("{");
	while (nn != NULL)
	{
		printf("'%s': '%s'", nn->key, nn->value);
		nn = nn->sprev;
		if (nn != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete sorteed HT
 * @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *nn, *curr;
	shash_table_t *h = ht;

	if (ht == NULL)
		return;
	nn = ht->shead;
	while (nn)
	{
		curr = nn->snext;
		free(nn->key);
		free(nn->value);
		free(nn);
		nn = curr;
	}
	free(h->array);
	free(h);
}
