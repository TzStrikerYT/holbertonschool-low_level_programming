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
 * add_node_end - add a new node in the final of a list
 * @head: pointer to linked list.
 * @str: Contains a string to add.
 * Return: address of a new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *node = malloc(sizeof(list_t));

	if (node == 0)
		return (0);

	tmp = *head;
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (!tmp)
	{
		*head = node;
	}
	else
	{
		while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;
	}
	return (node);
}
