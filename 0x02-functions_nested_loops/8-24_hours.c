#include "holberton.h"
/**
 * jack_bauer - count hours
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i;
	int j;
	int h1;
	int h2;
	int m1;
	int m2;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}


}
