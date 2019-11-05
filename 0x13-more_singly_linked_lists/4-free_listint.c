#include "lists.h"

/**
 * free_listint - free the list.
 * @head: contains a Struct of a list.
 * Return: void variable.
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
