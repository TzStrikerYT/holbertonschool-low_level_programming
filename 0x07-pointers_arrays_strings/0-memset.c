#include "holberton.h"

/**
 * _memset - memset to an String.
 *
 * @s: Contains a String.
 * @b: Contains a String to memset.
 * @n: Contains a n times to memset.
 *
 * Return: String memset.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
