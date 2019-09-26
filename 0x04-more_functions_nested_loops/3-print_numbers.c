#include "holberton.h"

/**
 * print_numbers - print the numbers 0-9
 *
 *
 * Return: Void variable.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
