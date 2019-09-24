#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	int i = 0;
	int j = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(a[i]);
		}
		_putchar('\n');
	}
}
