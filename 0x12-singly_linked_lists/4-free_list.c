#include "lists.h"

/**
*free_list - frees linked list
*@head: ad
*/

void free_list(list_t *head)
{
	list_t *p, *temp;

	for (p = head; p != NULL; p = temp)
	{
		if (p != NULL)
			temp = p->next;
		free(p->str);
		free(p);
	}
}
