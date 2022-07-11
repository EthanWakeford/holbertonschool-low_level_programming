#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		for (p = *head; p->next != NULL; p = p->next)
		{}
		p->next = new;
	}
	if (*head == NULL)
		*head = new;
	return (new);
}
