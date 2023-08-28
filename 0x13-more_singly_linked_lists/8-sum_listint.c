#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: add of head node
 * Return: sum of all the data, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (!head)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
