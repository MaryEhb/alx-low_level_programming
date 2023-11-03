#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * In case of collision, add the new node at the beginning of the list
 * @ht: hash table
 * @key: key
 * @value: value to be stored
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *newvalue;

	if (!key || !value || !ht || !(ht->size) || !(ht->array) || !strlen(key))
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			newvalue = strdup(value);
			if (!newvalue)
				return (0);
			free(node->value);
			node->value = newvalue;
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
