#include "lists.h"

/**
*sum_dlistint - returns sum of values of all list elements
*@head: first node in list
*Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	for (node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}
	return (sum);
}
