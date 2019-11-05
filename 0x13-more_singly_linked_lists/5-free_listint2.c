#include "lists.h"

/**
 * free_listint2 - free the list.
 * @head: contains a Struct of a list.
 * Return: void variable.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != 0)
	{
		while(*head != 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
