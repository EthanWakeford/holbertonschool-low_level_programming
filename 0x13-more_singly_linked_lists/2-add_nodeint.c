#include "lists.h"

/**
*add_nodeint - adds nose to beginning of list
*@head: pointer to first item of list
*@n: new value of new node
*Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
