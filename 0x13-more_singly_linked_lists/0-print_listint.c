#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 * Return:  the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *tmp = (listint_t *) h;
	unsigned int i = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
