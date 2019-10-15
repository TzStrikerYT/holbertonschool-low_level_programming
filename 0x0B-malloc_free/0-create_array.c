#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array
 * @size: value of size.
 * @c: character.
 *
 * Return: new array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
        char *a;

	if (size == 0)
	{
		return (NULL);
	}

        a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
