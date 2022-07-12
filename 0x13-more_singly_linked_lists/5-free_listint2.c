#include "lists.h"

/**
*free_listint2 - frees a list
*@head: pointer to pointer to first item in list
*/

void free_listint2(listint_t **head)
{
	listint_t *p, *temp;

	if (head == NULL)
		return;
	for (p = *head; p != NULL; p = temp)
	{
		temp = p->next;
		free(p);
	}
	*head = NULL;
}
