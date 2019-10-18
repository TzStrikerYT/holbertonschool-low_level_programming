#include "holberton.h"
#include <stdlib.h>

/**
 * _memcpy - memcpy function.
 * @dest: String to mem cpy.
 * @src: String for memcpy.
 * @n: n times to memcpy
 * Striker--
 * Return: String memcpyed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _realloc - Realloc memory block using malloc
 * @ptr: old memory
 * @old_size: value size of  old memory
 * @new_size: Size of new memory
 * Striker--
 * Return: new memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}

	if (new_size == 0  && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size < old_size)
		i = new_size;
	else
		i = old_size;

	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	a = _memcpy(a, ptr, i);

	free(ptr);

	return (a);
}
