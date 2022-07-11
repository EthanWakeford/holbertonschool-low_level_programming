#include "lists.h"

/**
*free_listint - frees a list
*@head: pointer to first item in list
*/

void free_listint(listint_t *head)
{
	listint_t *p, *temp;

	for (p = head; p != NULL; p = temp)
	{
		temp = p->next;
		free(p);
	}
}
