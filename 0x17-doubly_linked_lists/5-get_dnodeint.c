#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head in the list
 * @index: node to return
 * Return: Address of the node, NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int position = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	if (index == 0)
		return (head);

	actual = head;

	while (actual != NULL)
	{
		actual = actual->next;
		position++;

		if (position == index)
			return (actual);
	}
	return (NULL);
}
