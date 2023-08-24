#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: new ele str
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (0);
}
