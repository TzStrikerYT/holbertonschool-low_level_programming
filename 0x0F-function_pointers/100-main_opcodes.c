#include <stdlib.h>

/**
 * main - prints opcodes
 * @argv: contains a String
 * @argc: Contains a Integer value
 * Return: 0 on Success, exit whit 1 or two in case of error
 */

int main(int argc, char **argv)
{
	int x = atoi(argv[1]);

	if (x < 0)
	{
		puts("Error");
		exit(2);
	}

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	return (0);
}
