#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: new ele str
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (newnode)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = 0;

		if (!*head)
		{
			*head = newnode;
		}
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = newnode;
		}
		return (newnode);
	}
	return (0);
}
