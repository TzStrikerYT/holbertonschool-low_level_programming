#include "lists.h"

/**
 * listint_len - Return number of elements into the list.
 * @h: Call structure in the header file.
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int s;

	for (s = 0; h != 0; s++)
		h = h->next;

	return (s);
}
