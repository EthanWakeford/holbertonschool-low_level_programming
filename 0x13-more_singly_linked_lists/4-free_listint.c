#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *p, *temp;

	for (p = head; p != NULL; p = temp)
	{
		if (p != NULL)
			temp = p->next;
		free(p);
	}
}
