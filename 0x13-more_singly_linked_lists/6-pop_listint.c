#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *p;
	int x;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = (*head)->next;
	x = p->n;
	free(p);
	return (x);
}
