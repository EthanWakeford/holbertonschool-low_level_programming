#include "lists.h"

/**
*print_dlistint - prints a doubly linked list
*@h: first node
*Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t len = 0;

	for (node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		len++;
	}
	return (len);
}
