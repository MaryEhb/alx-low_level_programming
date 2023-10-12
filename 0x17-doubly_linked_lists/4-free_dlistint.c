#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp && tmp->next)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}

	if (tmp)
		free(tmp);
}
