#include "holberton.h"

/**
 * _strstr - locates a substring blah blabh
 *
 * @haystack: string
 * @needle: substring to analize.
 * Return: a first ocurrence if don't find, return NULL;
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int counter;

	while (haystack[i] != '\0')
	{
		counter = i;

		while (needle[j] == haystack[i] && haystack[i] != '\0'
		       && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + counter);
		i = counter + 1;
	}
	return (0);
}
