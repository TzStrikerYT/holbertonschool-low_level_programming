#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy an array.
 * @str: Contains a string to copy..
 *
 * Return: new array.
 */

char *_strdup(char *str)
{
	char *a;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	a = malloc(i * sizeof(char));

	if (a == NULL)
		return (NULL);

		for (j = 0; j < i; j++)
			a[j] = str[j];

		return (a);
}
