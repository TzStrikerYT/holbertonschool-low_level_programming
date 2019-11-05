#include "lists.h"

/**
 * add_nodeint_end - add a new node in the final of a list
 * @head: pointer to linked list.
 * @n: Contains a integer to add.
 * Return: address of a new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *tmp;
	list_t *node = malloc(sizeof(list_t));

	if (node == 0)
		return (0);

	tmp = *head;
	node->n = strdup(n);
	node->next = 0;

	if (!tmp)
	{
		*head = node;
	}
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;

		tmp->next = node;
	}
	return (node);
}
