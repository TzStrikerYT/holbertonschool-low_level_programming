#include <stdio.h>

/**
 * main - print numbers and words Fizz, Buzz.
 *
 * Return: Always 0.
 */

int main(void)
{

	int i;

	for (i = 1; i < 100; i++)
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
	printf("Buzz");
	putchar('\n');

	return (0);

}
