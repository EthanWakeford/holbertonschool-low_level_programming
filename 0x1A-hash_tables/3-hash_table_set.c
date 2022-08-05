#include "hash_tables.h"

/**
*hash_table_set - adds an element to hash table
*@ht: hash table
*@key: key for element
*@value: value for element
*Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node, *tmp;

	if (key == NULL || ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] != NULL)
	{
		for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
				free(tmp);
		}
		new_node->next = ht->array[index];
	}
	else
		new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
