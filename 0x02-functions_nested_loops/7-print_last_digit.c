#include "holberton.h"
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

	abs = fabs(n);

	return (abs % 10);
}
