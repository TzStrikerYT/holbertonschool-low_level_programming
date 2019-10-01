#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print reversed string
 *
 * @s: contains a string
 *
 * Return: void variable.
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
