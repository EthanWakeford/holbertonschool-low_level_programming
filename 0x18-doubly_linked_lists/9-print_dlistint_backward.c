#include "lists.h"

/**
*print_dlistint_backward - prints a list backwards
*@h: first node in list
*Return: amount of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t len = 0;

	if (h == NULL)
		return (0);
	for (node = h; node->next != NULL; node = node->next)
	{}
	for (; node != NULL; node = node->prev)
	{
		len++;
		printf("%d\n", node->n);
	}
	return (len);
}
