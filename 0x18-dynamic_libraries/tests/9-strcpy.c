#include <stdio.h>
#include "holberton.h"

/**
 * *_strcpy - print copy of a string.
 *
 * @dest: contains copy of string
 * @src: contains a string
 * Return: copy of string.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i];
	return (dest);
}
