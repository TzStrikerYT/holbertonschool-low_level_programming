#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: numbers to multiply
 * Return: Always (0) Success.
 */
int _check(char *s);
int _check(char *s)
{
	int res = 0;
	int i = 0;

	for (i = 0; *s; i++)
	{
		if (s[i] < 47 || s[i] > 58)
		{
			res = 0;
		}
		else
		{
			res = 1;
			break;
		}
	}
		return (res);
}


int main (int argc, char *argv[])
{
	int check = 0;
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		check = _check(argv[i]);

		if (check == 1)
		{
			puts("Error");
			return (1);
		}
	}

	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
		printf("%d\n", sum);
	}

	printf("%d\n", sum);
	return (0);
}
