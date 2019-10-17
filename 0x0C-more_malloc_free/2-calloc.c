#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @size: integer value of size.
 * @nmemb: integer value.
 *
 * Return: new array.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i, a_size;
	char *a;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

    a_size = size * nmemb;

	a = malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}

    for (i = 0; i < a_size; i++)
		a[i] = 0;

    return (a);

}
