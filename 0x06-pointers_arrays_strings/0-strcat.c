#include <stdio.h>

/**
 * *_strcat - concat two Strings.
 *
 * @dest: have a 1st String.
 * @src: have a 2nd String
 *
 * Return: concatened String.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[j] = src[j];

	return (dest);
}
