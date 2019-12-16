#include <stdio.h>

/**
 * *_strcmp - function that compares a strings.
 *
 * @s1 : Cointains a String.
 * @s2 : Contains a String to compare whit s1.
 *
 * Return: Copied String.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int z = 0;

	for (i = 0; ((s1[i] || s2[i]) && !z); i++)
	{
		if (s1[i] != s2[i])
		{
			z = s1[i] - s2[i];
		}
	}
	return (z);
}
