#include "lists.h"

/**
 * *insert_dnodeint_at_idx - Insert a new node in a given index
 * @head: Head of the list
 * @idx: Index to insert
 * @n: Value to new node
 * Return: Address of the new node, NULL on error
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int position;
	dlistint_t *n_node, *actual = *head, *prev;

	if (*head == NULL && idx != 0)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	if (*head != NULL)
	{
		prev = NULL;
		while (actual->prev != NULL)
			actual = actual->prev;
		for (position = 0; actual != NULL && position < idx; position++)
		{
			prev = actual;
			actual = actual->next;
		}
		if (position == idx)
		{
			n_node->n = n;
			n_node->prev = prev;
			if (actual != NULL)
				actual->prev = n_node;
			n_node->next = actual;
			if (idx != 0)
				prev->next = n_node;
			else
				*head = n_node;
			return (n_node);
		}
		return (NULL);
	}
	n_node->next = NULL;
	n_node->prev = NULL;
	n_node->n = n;
	*head = n_node;
	return (n_node);
}
