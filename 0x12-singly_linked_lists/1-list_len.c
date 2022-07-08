#include "lists.h"

/**
*list_len - return number of elementss in linked list
*@h: first item in list
*Return: count of items in list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	for (; p != NULL; p = p->next)
		count++;
	return (count);
}
