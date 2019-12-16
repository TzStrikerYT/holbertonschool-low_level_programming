#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given position
 * @head: Head of the list
 * @index: The index to delete
 * Return: 1 on success, -1 on error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *node = *head;
	dlistint_t *tmp;

	if (!head)
		return (-1);

	if (index == 0)
	{
		if (node == NULL)
			return (-1);

		*head = node->next;
		if (*head)
			(*head)->prev = NULL;

		free(node);
		return (1);
	}

	for (; node; node = node->next, index--)
	{
		if (index - 1 == 0)
		{
			tmp = node->next;
			if (!tmp)
				break;
			node->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = node;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
