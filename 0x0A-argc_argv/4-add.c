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

	if (argc - 1 > 1)
	{
		res = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		puts("0");
		return (1);
	}
	return (0);
}

int _number(char *s)

	for (;s*;s++)
	{
		if (*s > 47 && *s < 58)
