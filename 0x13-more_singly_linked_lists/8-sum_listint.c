#include "lists.h"

/**
*sum_listint - returns sum of all data in list
*@head: pointer to first item in list
*Return: sum
*/

int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	for (p = head; p != NULL; p = p->next)
	{
		sum += p->n;
	}
	return (sum);
}
