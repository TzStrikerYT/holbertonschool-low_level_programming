#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given position
 * @head: Head of the list
 * @index: The index to delete
 * Return: 1 on success, -1 on error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *actual = *head;
	dlistint_t *d_node;

	if (*head == NULL)
		return (-1);

	while (actual->prev != NULL)
		actual = actual->prev;

	while (actual != NULL && position < index)
	{
		actual = actual->next;
		position++;
	}

	if (position < index)
		return (-1);

	if (position == 0 && actual->next != NULL)
	{
		d_node = actual;
		actual = actual->next;
		actual->prev = NULL;
		*head = actual;

		free(d_node);

		return (1);
	}
	else if (position > 0)
	{
		d_node = actual;
		actual = actual->prev;
		actual->next = d_node->next;
		free(d_node);
	}
	else
	{
		*head = actual->next;
		free(actual);
	}
	return (1);
}
