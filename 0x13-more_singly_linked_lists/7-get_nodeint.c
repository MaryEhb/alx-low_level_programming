#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: address of head node
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (0);

	tmp = head;
	while (tmp)
	{
		if (index == i)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
