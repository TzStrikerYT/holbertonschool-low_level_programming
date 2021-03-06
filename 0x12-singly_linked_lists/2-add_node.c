#include "lists.h"

/**
 * _strlen - count number letters in a word
 *
 * @s: contain string
 *
 * Return: int variable.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}

/**
 * add_node - add a new node in a list
 * @head: pointer to linked list.
 * @str: Contains a string to add.
 * Return: address of a new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (0);

	node->str = strdup(str);
	node->len = _strlen(str);

	node->next = *head;
	*head = node;
	return (node);
}
