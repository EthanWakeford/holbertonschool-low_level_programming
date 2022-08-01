#include "lists.h"

/**
*free_dlistint - frees a list
*@head: first node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *temp;

	for (node = head; node != NULL; node = temp)
	{
		temp = node->next;
		free(node);
	}
}
