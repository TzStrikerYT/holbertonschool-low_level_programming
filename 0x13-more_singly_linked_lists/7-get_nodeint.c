#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of the list
 * @head: head of linked list
 * @index: index of the list to find
 * Return: head of the list.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == 0)
		return (0);

		head = head->next;
	}
	return (head);
}
