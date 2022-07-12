#include "lists.h"

/**
*insert_nodeint_at_index - adds new node at indexed postion
*@head: pointer to pointer of new node
*@idx: index of node to add
*@n: value of new node
*Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (p = *head; (count + 1) < idx; p = p->next, count++)
	{
		if (p == NULL)
			return (NULL);
	}
	new->n = n;
	new->next = p->next;
	p->next = new;
	return (new);
}
