#include "lists.h"

/**
 * print_listint - Prints elements into the list.
 * @h: Call structure in the header file.
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int s;

	for (s = 0; h != NULL; s++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (s);
}
