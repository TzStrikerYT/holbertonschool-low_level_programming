#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 *@size: size of hash table
 *
 *Return: Hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t) * 1);

	if (!ht)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	return (ht);
}
