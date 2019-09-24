#include "holberton.h"
/**
 * times_table - print all tables of multiply.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x;
	int y;
	int num;

	for (y = 0; y <= 9; y++)
	{
		putchar('0');
		for (x = 1; x <= 9; x++)
		{
			num = x * y;
			if (num < 10)
			{

				putchar(44);
				putchar(' ');
				putchar(' ');
				putchar('0' + num);
			}
			if (num >= 10 && num <= 82)
			{
				putchar(44);
				putchar(' ');
				putchar('0' + num / 10);
				putchar('0' + num % 10);
			}
		}
		putchar('\n');
	}
}
