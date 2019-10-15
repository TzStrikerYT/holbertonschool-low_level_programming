#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy an array.
 * @str: Contains a string to copy..
 *
 * Return: new array.
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int len2;
	int i;
	int j;
	char *a;
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;

	for (len = 0; s1[len]; len++);
	for (len2 = 0; s2[len2]; len2++);

	a = malloc(sizeof(char) * (len + len2 + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = s1[i];

	for (i = 0, j = len; i <= len2; j++, i++)
		a[j] = s2[i];

	return (a);
}
