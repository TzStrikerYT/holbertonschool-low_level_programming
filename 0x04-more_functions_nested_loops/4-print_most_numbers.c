#include "holberton.h"

/**
 * print_most_numbers - print the numbers 0-9 except 2 and 4
 *
 *
 * Return: Void variable.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
