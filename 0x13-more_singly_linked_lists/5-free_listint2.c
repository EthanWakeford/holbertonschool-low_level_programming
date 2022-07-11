#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *p, *temp;

	for (p = *head; p != NULL; p = temp)
	{
		temp = p->next;
		free(p);
	}
	*head = NULL;
}
