#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to address of head node
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: new data
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * new node isn't added and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i = 0;

	if (!head)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}

	free(new_node);
	return (0);
}
