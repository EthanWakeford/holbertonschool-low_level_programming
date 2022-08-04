#include "hash_tables.h"

/**
*hash_table_get - returns the value at a given key
*@ht: hash table
*@key: the key
*Return: value, or NULL if cannot be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}