#include "holberton.h"

/**
 * _print_rev_recursion - prints any string in reverse.
 * @s: Contains a string to reverse
 * Return: Void variable.
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
