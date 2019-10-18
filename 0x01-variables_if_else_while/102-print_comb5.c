#include<stdio.h>

/**
 * main - print two numbers of two digits
 * Striker--
 * Return: 0 Success
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int p, s, t, c;

	for (i = 0; i < 100; i++)
	{
		p = i / 10;
		s = i % 10;

		for (j = 0; j < 100; j++)
		{
			t = j / 10;
			c = j % 10;

			if (i != j && i < j)
			{
				putchar(p + '0');
				putchar(s + '0');
				putchar(' ');
				putchar(t + '0');
				putchar(c + '0');

				if (i == 98 && j == 99)
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
