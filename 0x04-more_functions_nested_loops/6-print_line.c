#include "holberton.h"

/**
 * print_line - print under line (_) n times.
 *
 * @n: Vriable with a integer number.
 *
 * Return: Void variable.
 */

void print_line(int n)
{

	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');

}
