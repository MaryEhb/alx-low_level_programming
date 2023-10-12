#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head
 * Return: sum of all n. if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}

	return (sum);
}
