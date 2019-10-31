#include "lists.h"

/**
 * _strlen - count number letters in a word
 *
 * @s: contain string
 *
 * Return: int variable.
 */

int _strlen(char *s)
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
	char *temp;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (0);

	else
	{
		temp = strdup(str);

		if (temp == 0)
			return (0);
		node->str = temp;
		node->len = _strlen(temp);
	}

	node->next = *head;
	*head = node;
	return (node);
}
