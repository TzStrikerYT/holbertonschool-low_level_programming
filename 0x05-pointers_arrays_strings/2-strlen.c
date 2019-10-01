#include "holberton.h"

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
