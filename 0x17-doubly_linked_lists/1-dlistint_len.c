#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	if (h)
	{
		while (tmp)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}
