#include "lists.h"

/**
 * pop_listint - delete the head of the node
 * @head: pointer to head list
 * Return: head node of data(n).
 */

int pop_listint(listint_t **head);
{
	int retval = -1;
	listint_t * next_node = NULL;

	if (*head == NULL) {
		return 0;
	}

	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;

	return retval;
}
