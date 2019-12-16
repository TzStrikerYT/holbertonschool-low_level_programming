#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts String to int
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
	int i, j, a2, negative, found;
	unsigned int a;

	a = 0;
	i = 1;
	negative = 1;
	found = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((s[j] >= 48) && (s[j] <= 57))
		{
			a = a * 10 + (s[j] - '0');
			found = 1;
		}
		else if (s[j] == 45)
		{
			negative = negative * -1;
		}
		else if (found == 1)
		{
			break;
		}
	}
	a2 = a * negative;
	return (a2);
}
