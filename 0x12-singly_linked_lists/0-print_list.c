#include "lists.h"

/**
*print_list - prints all elements of list_t list
*@h: first item in list
*Return: the number of nodes, 0 if fail
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	if (h == NULL)
		return (0);
	for (; p != NULL; p = p->next)
	{
		if (p->str != NULL)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		count++;
	}
	return (count);
}
