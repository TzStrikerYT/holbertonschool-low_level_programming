#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - Write a function that creates an array of integers.
 * @min: integer value
 * @max: integer value
 * Return: new array of integers.
 */

int *array_range(int min, int max)
{
	int i, size, n;
	int *a;

	if (min > max)
		return (NULL);

	size = max - min;
	a = malloc((size + 1) * sizeof(int));
	n = min;

	for (i = 0; n <= max; i++, n++)
		a[i] = n;

	return (a);
}
