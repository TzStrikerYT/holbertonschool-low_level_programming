#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concat two strings.
 * @s1: Contains a string
 * @s2: contains a string to concat whit s1.
 * @n: integer value to count n characters to use in variable s2
 * Return: new String.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	int len2;
	unsigned int i;
	int j;
	char *a;
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;

	for (len = 0; s1[len]; len++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	a = malloc(sizeof(char) * (len + len2 + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = s1[i];

	for (i = 0, j = len; i <= n; j++, i++)
		a[j] = s2[i];

	return (a);
}
