#include "lists.h"

/**
 * size_t print_dlistint - print all elements of the list
 * @h: head of the list
 * Return: Nunber of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_elements = 0;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			n_elements++;
			h = h->next;
		}
	}
	return (n_elements);
}
