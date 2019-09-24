#include "holberton.h"

/**
 * print_alphabet - print a word
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
}
