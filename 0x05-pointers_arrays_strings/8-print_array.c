#include "holberton.h"

/**
 * print_array - print content of arrays.
 *
 * @a: array
 * @n: n positions of an array;
 *
 * Return: void variable.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n - 1 == i)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		_putchar('\n');
	}
}
