#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of list
 * Return:  the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	listint_t *tmp = (listint_t *) h;
	unsigned int i = 0;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
