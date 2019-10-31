#include "lists.h"

/**
 * print_list - Prints elements into the list.
 * @h: Call structure in the header file.
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n_nodes;

	if (h == NULL)
		return (0);

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		}
	}
	return (n_nodes);
}
