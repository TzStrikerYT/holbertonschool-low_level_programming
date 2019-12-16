#include <stdio.h>

/**
 * *_strncat - concat two Strings.
 *
 * @dest: have a 1st String.
 * @src: have a 2nd String.
 * @n: integer value.
 *
 * Return: concatened String.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int counter = 0;

	for (i = 0; dest[i]; i++)
	{
		counter++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[counter + i] = src[i];
	}
	dest[counter + i] = '\0';

	return (dest);
}
