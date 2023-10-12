#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to head add
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (i != index && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;

	if (i == 0)
		*head = tmp->next;

	free(tmp);

	return (1);
}
