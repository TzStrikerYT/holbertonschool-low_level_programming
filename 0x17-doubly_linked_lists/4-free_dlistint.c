#include "lists.h"

/**
 * free_dlistint - Free a list
 * @head: Pointer to head in the list
 * Return: Void function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			free_node = head;
			head = head->next;
			free(free_node);
		}
	}
}
