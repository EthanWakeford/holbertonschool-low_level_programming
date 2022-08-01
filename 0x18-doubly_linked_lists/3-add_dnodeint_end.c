#include "lists.h"

/**
*add_dnodeint_end - adds a new node at end of linked list
*@head: first node
*@n: value of new node
*Return: address of new node, null if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head != NULL)
	{
		for (node = *head; node->next != NULL; node = node->next)
		{}
		node->next = new_node;
	}
	new_node->n = n;
	new_node->prev = node;
	new_node->next = NULL;
	if (*head == NULL)
		(*head) = new_node;
	return (new_node);
}
