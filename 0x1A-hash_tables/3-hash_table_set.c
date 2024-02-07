#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - A function that adds an element to
 * the table
 *
 * @ht: The hash
 * @key: The key
 * @value: The value
 * Return: 1 ,or 0
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_hash_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* checking */
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	/* Update */
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	/* adding new node */

	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
