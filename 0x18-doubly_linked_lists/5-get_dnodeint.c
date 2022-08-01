#include "lists.h"

/**
*get_dnodeint_at_index - returns node at index
*@head: first node
*@index: index of node in list
*Return: node, NULL if failure
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	for (node = head; i < index; node = node->next, i++)
	{
		if (node == NULL)
			return (NULL);
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
