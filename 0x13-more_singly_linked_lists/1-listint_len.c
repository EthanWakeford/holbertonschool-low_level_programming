#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int count = 0;

	while (p != NULL)
	{
		count ++;
		p = p->next;
	}
	return (count);
}
