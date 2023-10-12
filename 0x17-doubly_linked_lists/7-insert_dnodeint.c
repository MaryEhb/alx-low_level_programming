#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head add
 * @idx: index  starts at 0
 * @n: number to be added
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int count = 0;

	if (!tmp && idx > 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (count != idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		count++;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}
