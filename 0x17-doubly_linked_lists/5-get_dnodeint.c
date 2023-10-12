#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: is the index of the node, starting from 0
 * Return: nth node. if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	while (tmp)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
