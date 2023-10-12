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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	unsigned int count = 0;

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*h))
	{
		*h = new;
	}
	else
	{
		while (tmp)
		{
			if (count == idx)
			{
				tmp->prev->next = new;
				new->prev = tmp->prev;
				new->next = tmp;
				tmp->prev = new;
				return (new);
			}
			tmp = tmp->next;
			count++;
		}
	}

	return (NULL);
}
