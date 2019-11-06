#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at given index
 * @head: Pointer to the head of the linked list
 * @index: The index position to add
 * @n: The value to assign to the data of the node
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new;
	listint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (current == NULL && index != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (count != index - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		count++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
