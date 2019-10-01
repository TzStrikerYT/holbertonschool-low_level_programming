#include "holberton.h"

/**
 * rev_string - reverse string.
 *
 * @s: contais a String.
 *
 * Return: reversed String.
 */

void rev_string(char *s)
{
	int i;
	char t;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	i -= 1;

	while (i > count)
	{
		t = s[count];
		s[count] = s[i];
		s[i] = t;
		i--;
		count++;
	}
}
