#include "holberton.h"

/**
 * print_square - print numeral sign (\).
 *
 * @size: Vriable with a integer number.
 *
 * Return: Void variable.
 */

void print_square(int size)
{

	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
