#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the address of head node
 * Return:  the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
