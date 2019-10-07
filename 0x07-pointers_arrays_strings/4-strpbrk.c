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
	int a, b, c, d;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; accept[b] != '\0'; b++)
		;

	for (c = 0; c <= a; c++)
		for (d = 0; d <= b; d++)
			if (s[c] == accept[d])
				return (s + c);
return (0);
}
