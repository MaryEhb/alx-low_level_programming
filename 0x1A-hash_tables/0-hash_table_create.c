#include "hash_tables.h"
# include <stdlib.h>

/**
 * hash_table_create - creates a hash table.
 * @size: array size
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!(table->array))
		return (NULL);

	while (i < size)
	{
		table->array[i] =  NULL;
		i++;
	}

	return (table);
}
