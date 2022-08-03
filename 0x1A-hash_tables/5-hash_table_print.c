#include "hash_tables.h"

/**
*printlist - prints linked list
*@node: first node
*/

void printlist(hash_node_t *node)
{
	hash_node_t *temp = node->next;

	for (; temp != NULL; temp = temp->next)
	{
		printf(", \'%s\': \'%s\'", temp->key, temp->value);
	}
}

/**
*hash_table_print - prints out a hash table
*@ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_not_first = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (is_not_first)
				printf(", ");
			printf("\'%s\': ", ht->array[i]->key);
			printf("\'%s\'", ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				printlist(ht->array[i]);
			is_not_first = 1;
		}
	}
	printf("}\n");
}
