#include "holberton.h"

/**
 * _memcpy - memcpy function.
 * @dest: String to mem cpy.
 * @src: String for memcpy.
 * @n: n times to memcpy
 * Return: String memcpyed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
