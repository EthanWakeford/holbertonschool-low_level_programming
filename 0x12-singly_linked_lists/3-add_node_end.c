#include "lists.h"

/**
*add_node_end - adds a new node at end of linked list
*@head: pointer to first element
*@str: string to add
*Return: addess of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
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
