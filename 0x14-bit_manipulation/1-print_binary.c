#include "holberton.h"

/**
 * print_binary - print conversion of any decimal number
 * @n: contains a integer value in base 10
 * Return: Void variable.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
