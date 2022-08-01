#include "lists.h"

/**
*add_dnodeint - adds a node at beginning of linked list
*@head: first node
*@n: value of new node
*Return: pointer to new first node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = (*head);
	node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = node;
	(*head) = node;
	return (*head);
}
