#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer value
 * Return: new array.
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
