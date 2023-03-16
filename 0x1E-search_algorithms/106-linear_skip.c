#include "search_algos.h"

/**
 * linear_skip - uses skip array to search array faster
 *
 * @list: list to search in
 * @value: value to search for
 *
 * Return: node of value, or null if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *prev = list;


	if (!list)
		return (NULL);
	node = list->express; /*issue to fix if express is null*/
	for (; node != NULL; prev = node, node = node->express)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n >= value)
			break;
	}

	if (node == NULL)
	{
		for (node = prev; node->next != NULL; node = node->next)
		{}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, node->index);
	for (; prev != NULL; prev = prev->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
	}
	return (NULL);
}
