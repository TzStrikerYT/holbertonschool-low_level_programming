#include "lists.h"

/**
 * add_nodeint - add a new node in a list
 * @head: pointer to linked list.
 * @n: Contains a integer to add.
 * Return: address of a new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == 0)
		return (0);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
