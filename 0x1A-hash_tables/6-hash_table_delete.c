#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node, *tmp;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		node = ht->array[i];

		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}

		i++;
	}
	free(ht->array);
	free(ht);
}
