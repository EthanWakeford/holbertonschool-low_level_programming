#include "lists.h"

/**
*dlistint_len - returns length of a list
*@h: first node
*Return: length of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *node;

	for (node = h; node != NULL; node = node->next)
	{
		len++;
	}
	return (len);
}
