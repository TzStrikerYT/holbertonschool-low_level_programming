#include "lists.h"

/**
 * *add_dnodeint_end - Add a node to the end of a d_list
 * @head: head of the list
 * @n: value store in the new node
 * Return: Address of the new node, NULL if error
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *actual;

	actual = *head;
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	if (actual == NULL)
	{
		n_node->next = *head;
		n_node->n = n;
		n_node->prev = NULL;
		*head = n_node;
	}
	else
	{
		while (actual != NULL && actual->next != NULL)
			actual = actual->next;
		actual->next = n_node;
		n_node->prev = actual;
		n_node->n = n;
		n_node->next = NULL;
	}
	return (n_node);
}
