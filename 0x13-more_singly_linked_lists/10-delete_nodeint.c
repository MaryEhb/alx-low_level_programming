#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to address of head node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *delete_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
		free(delete_node);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == index - 1)
		{
			delete_node = tmp->next;
			tmp->next = delete_node->next;
			free(delete_node);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
