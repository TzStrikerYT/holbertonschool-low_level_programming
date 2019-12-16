#include "lists.h"

/**
 * *add_dnodeint - Add a new node
 * @head: header of a list
 * @n: Value stored in a new node
 * Return: address of a new node, NULL on error
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *init;

	init = *head;
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	if (init != NULL)
	{
		while (init->prev != NULL)
			init = init->prev;

		init->prev = n_node;
	}

	n_node->next = *head;
	n_node->n = n;
	n_node->prev = NULL;
	*head = n_node;

	return (n_node);
}
