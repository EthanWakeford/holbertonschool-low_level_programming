#include "hash_tables.h"

/**
*hash_table_get - returns the value at a given key
*@ht: hash table
*@key: the key
*Return: value, or NULL if cannot be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
		return (NULL);
	if (tmp->next != NULL)
	{
		for (;tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		}
		return (NULL);
	}
	return (ht->array[index]->value);
}
