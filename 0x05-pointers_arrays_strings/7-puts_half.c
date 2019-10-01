#include "holberton.h"

/**
 * puts_half - print half string
 *
 * @str: String value
 *
 * Return: void variable.
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; *(str + i) != 0; i++)
	{
	}

	if (i % 2 != 0)
	{
		i -= 1;
	}

	for (j = i / 2; j <= i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
