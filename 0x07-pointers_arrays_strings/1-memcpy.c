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
	int i = 0;

	for (i; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
