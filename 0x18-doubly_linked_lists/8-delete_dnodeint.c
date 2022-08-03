#include "lists.h"

/**
*delete_dnodeint_at_index - deletes a node at index
*@head: pointer to first node
*@index: index of node to delete
*Return: 1 if success, -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int i = 0;

	node = (*head);
	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		if (node->next != NULL)
		{
			temp = node->next;
			temp->prev = NULL;
		}
		*head = node->next;
		free(node);
		return (1);
	}
	for (; i < index; node = node->next, i++)
	{
		if (node == NULL)
			return (-1);
	}
	if (node->next != NULL)
	{
		temp = node->next;
		temp->prev = node->prev;
	}
	temp = node->prev;
	temp->next = node->next;
	free(node);
	return (1);
}
