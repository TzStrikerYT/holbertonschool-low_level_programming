#include "holberton.h"

/**
 * _strpbrk - Search a String for any bytes.
 *
 *@s: Contains a String.
 *@accept: Contains a array of Chars to search in the string.
 *
 * Return: new String.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);

return (0);
}
