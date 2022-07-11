#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int count = 0;

	for (p = head; count < index; count++, p = p->next)
	{
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
