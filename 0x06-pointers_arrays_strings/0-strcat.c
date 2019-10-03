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
	int a = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[a] != '\0')
	{
		a++;
	}

	while (j < a)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
