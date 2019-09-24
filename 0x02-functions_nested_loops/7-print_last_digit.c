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

	abs = fabs(n);
	last = abs % 10;
	_putchar('0' + last);

	return (last);
}
