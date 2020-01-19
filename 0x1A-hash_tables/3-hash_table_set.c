#include "hash_tables.h"

/**
 * add_hn - adds hash node.
 * @key: key you want add.
 * @value:value of the key.
 * Return: new node, NULL on error.
 */

hash_node_t *add_hn(const char *key, const char *value)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));
	if (!n_node)
		return (NULL);

	n_node->key = strdup(key);
	n_node->value = strdup(value);

	if (!n_node->key || !n_node->value)
	{
		if (n_node->key)
			free(n_node->key);
		free(n_node);
		return (NULL);
	}

	return (n_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: key you want add.
 * @value:value of the key.
 * Return: new node, NULL on error.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *n_node, *tmp;

	if (!ht || !key || !value || !strlen(key) == 0 || !ht->array)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	node = tmp;

	if (node)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 1)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	n_node = add_hn(key, value);
	if (!n_node)
		return (0);
	n_node->next = node;
	ht->array[index] = n_node;
	return (1);
}
