#include "holberton.h"

/**
 * print_triangle - print a triangle with # folowed by a new linw
 *
 * @size: height of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i) - 1; j++)
		{
			_putchar(' ');
		}

		for (j = j; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
