#include "lists.h"

/**
*listint_len - listslength of list
*@h: pointer to first item in list
*Return: count of list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
