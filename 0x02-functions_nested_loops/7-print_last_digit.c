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

	int last = 0;

	if (n < 0)
	{
		n *= -1;

	}

	last = n % 10;
	_putchar('0' + last);

	return (last);
}
