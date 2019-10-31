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
 * *_strdup - copy an array.
 * @str: Contains a string to copy..
 *
 * Return: new array.
 */

char *_strdup(const char *str)
{
	char *a;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];

	return (a);
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

	if (str == NULL)
		return(0);

	else
	{
		temp = _strdup(str);

		if (temp == 0)
			return (0);
		node->str = temp;
		node->len = _strlen(temp);
	}

	node->next = *head;
	*head = node;
	return (node);
}
