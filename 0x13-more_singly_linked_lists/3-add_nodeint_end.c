#include "lists.h"

/**
*add_nodeint_end - adds new node to end of list
*@head: pointer to first item of list
*@n: value of new node
*Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		for (p = *head; p->next != NULL; p = p->next)
		{}
		p->next = new;
	}
	if (*head == NULL)
		*head = new;
	return (new);
}
