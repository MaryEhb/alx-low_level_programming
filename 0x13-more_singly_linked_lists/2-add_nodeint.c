#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of linkedlist
 * @n: new n
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (0);

	new->n = n;

	if (!*head)
		new->next = 0;
	else
		new->next = *head;

	*head = new;
	return (new);
}
