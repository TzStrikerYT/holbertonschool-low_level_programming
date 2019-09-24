#include "holberton.h"
#include <math.h>
/**
 * print_last_digit - print the last digit
 *
 * @n: is a in variable
 *
 * Return: last digit for the main.
 */

int print_last_digit(int n)
{
	int abs;
	int last;

	if (n < 0)
	{
		abs = fabs(n);
		last = abs % 10;

	}
	else
	{

	last = n % 10;

	}
	_putchar('0' + last);

	return (last);
}
