#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: void variable/ unused.
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 0)
		printf("%s\n", argv[i]);

		for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
