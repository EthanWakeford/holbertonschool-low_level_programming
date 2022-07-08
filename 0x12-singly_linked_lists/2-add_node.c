#include "lists.h"

/**
*add_node - adds a new node at beginning of linked list
*@head: pointer to first element of list
*@str: string to duplicate
*Return: poinbter to new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (*head);
}
