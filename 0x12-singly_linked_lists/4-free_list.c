#include "lists.h"

/**
 * free_list - free the list.
 * @head: contain a Struct of a list.
 * Return: void variable.
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
