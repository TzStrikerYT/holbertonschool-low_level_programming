#include <stdio.h>

/**
 * *_strncpy - function that copies a string.
 *
 * @dest : Cointains a String.
 * @src : Contains a Syring.
 * @n: Integer Value.
 *
 * Return: Copied String.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i]; i++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}


	return (dest);
}
