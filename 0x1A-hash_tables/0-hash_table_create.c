#include "hash_tables.h"

/**
*hash_table_create - creates a hash table
*@size: size of hash table
*Return: pointer to new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
