#include "hash_tables.h"

/**
 * hash_table_get - retrieves a hash value
 * @ht: hast table
 * @key: Number of key
 * Return: The value requested
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array || !(ht->array)[index])
		return (NULL);

	node = (ht->array)[index];

	while (strcmp(node->key, key))
		node = node->next;

	return (node ? node->value : NULL);
}
