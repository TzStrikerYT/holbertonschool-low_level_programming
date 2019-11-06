#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given index
 * @head: Pointer to a pointer to the head of the linked list
 * @index: The location in the list of the node
 *
 * Return: 1 on success, -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i != index; i++)
	{
		prev = current;
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	prev->next = current->next;
	free(current);
	return (1);
}
