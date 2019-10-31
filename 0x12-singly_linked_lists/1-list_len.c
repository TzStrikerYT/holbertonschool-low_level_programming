#include "lists.h"

/**
 * list_len - Return number of elements into the list.
 * @h: Call structure in the header file.
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n_nodes;

	if (h == NULL)
		return (0);

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		h = h->next;
	}
	return (n_nodes);
}
