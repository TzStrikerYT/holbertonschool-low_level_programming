#include "lists.h"

/**
 * dlistint_len - Returns number of elements in the list
 * @h: header of the list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elements = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n_elements++;
		h = h->next;
	}

	return (n_elements);
}
