#include "lists.h"
#include <stdlib.h>

/**
 * list_t - frees a list_t list.
 * @head: head of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
