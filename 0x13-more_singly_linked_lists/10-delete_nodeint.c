#include "lists.h"

/**
*delete_nodeint_at_index - deletes node at index
*@head: pointer to pointer to first element of list
*@index: index of node to delete
*Return: 1 if successful, -1 if fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head, *temp;
	unsigned int count = 0;

	if (p == NULL)
		return (-1);
	if (index == 0)
	{
		*head = p->next;
		free(p);
	}
	if (index != 0)
	{
		for (; (count + 1) < index; p = p->next, count++)
		{
			if (p == NULL)
				return (-1);
		}
		temp = p->next;
		p->next = p->next->next;
		free(temp);
	}
	return (1);
}
