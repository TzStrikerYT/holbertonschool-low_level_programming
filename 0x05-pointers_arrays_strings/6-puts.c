#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - assign new value
 *
 * @str: String value
 *
 * Return: void variable.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
