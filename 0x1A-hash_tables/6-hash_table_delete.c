#include "hash_tables.h"

/**
*freelist - frees a linked list after the first node
*@head: pointer to first node
*/

void freelist(hash_node_t *head)
{
	hash_node_t *node, *temp;

	for (node = head->next; node != NULL; node = temp)
	{
		temp = node->next;
		free(node);
	}
}
/**
*hash_table_delete - deletes a hash table
*@ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
				freelist(ht->array[i]);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
