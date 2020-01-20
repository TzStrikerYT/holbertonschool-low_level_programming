#include "hash_tables.h"
/**
 * hash_table_print - prints key value in jason format
 * @ht: hash table
 * Return: void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, len = 0;
	int comma = 0;

	if (ht && ht->array)
	{
		putchar('{');
		len = ht->size;
		while (i < len)
		{
			node = (ht->array)[i];
			if (node)
			{
				if (comma)
					printf(", ");
				while (node->next)
				{
					printf("'%s': '%s', ", node->key,
					       node->value);
					node = node->next;
				}
				printf("'%s': '%s'", node->key, node->value);
				if (!comma)
					comma = 1;
			}
			i++;
		}
		printf("}\n");
	}
}
