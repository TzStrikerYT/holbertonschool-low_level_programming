#include "hash_tables.h"

/**
 * hash_table_delete - free hash table.
 * @ht: hash table.
 * Return: Void function.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i = 0, len = 0;

	if (ht && ht->array)
	{
		len = ht->size;
		while (i < len)
		{
			while (node)
			{
				tmp = node->next;
				if (node->key)
					free(node->key);
				if (node->value)
					free(node->value);
				free(node);
				node = tmp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
