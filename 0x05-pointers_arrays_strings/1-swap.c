#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - assign new value
 *
 * @a: integer value
 * @b: integer value
 *
 * Return: void variable.
 */

void swap_int(int *a, int *b)
{

	int c;

	c = *a + *b;
	*a = c - *a;
	*b = c - *b;
}
