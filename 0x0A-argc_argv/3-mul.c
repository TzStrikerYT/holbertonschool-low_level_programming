#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: numbers to multiply
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])
{
	int res;
	int x = 0;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	else
	{
		printf("%s\n", "Error");
		x = 1;
	}
	return (x);
}
