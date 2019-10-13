#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: numbers to multiply
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])
{
	int a;
	int x;
	int add;

	add = 0;

	for (a = 1; a < argc; a++)
	{
		for (x = 0; argv[a][x] != '\0'; x++)
		{
			if (!isdigit(argv[a][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
