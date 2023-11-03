#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, count = 0;
	hash_node_t *node;

	if (!ht || !(ht->size) || !(ht->array))
		return;

	putchar('{');

	while (i < ht->size)
	{
		node = ht->array[i];

		while (node)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			count++;
		}

		i++;
	}
	printf("}\n");
}
