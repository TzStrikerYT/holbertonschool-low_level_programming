#include "holberton.h"

/**
 * _puts - print a string
 *
 * @str: contains a string
 *
 * Return: void variable.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
