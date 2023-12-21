#include "hash_tables.h"
/**
 * key_index - to ind of key
 * @key: index to key
 * @size: ht size
 * Return: int to key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
