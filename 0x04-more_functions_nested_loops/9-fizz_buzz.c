#include <stdio.h>

/**
 * main - print numbers and words Fizz, Buzz.
 *
 * Return: Always 0.
 */

int main(void)
{

	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i != 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	return (0);

}
