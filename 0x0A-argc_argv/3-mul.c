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
	(void)argc;

	if (argv[1] && argv[2])
	{
		printf("%d \n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
}
