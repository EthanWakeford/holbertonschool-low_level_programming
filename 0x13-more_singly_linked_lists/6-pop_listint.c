#include "lists.h"

/**
*pop_listint - pops out first item in list
*@head: pointer to pointer to first item in list
*Return: value of popped item
*/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int x;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = (*head)->next;
	x = p->n;
	free(p);
	return (x);
}
