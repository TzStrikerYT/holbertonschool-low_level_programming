#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: numbers to multiply
 * Return: Always (0) Success, if error returns 1.
 */

int main(int argc, char *argv[])
{
	int c = 0;
	int m = 0;

	if (argc == 2)
	{
		c = atoi(argv[1]);

		for (; c >= 25; m++)
			c -= 25;

		for (; c >= 10; m++)
			c -= 10;

		for (; c >= 5; m++)
			c -= 5;

		for (; c >= 2; m++)
			c -= 2;

		for (; c >= 1; m++)
			c -= 1;

		printf("%d\n", m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
