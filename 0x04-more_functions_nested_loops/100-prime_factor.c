#include <stdio.h>

/**
 * main - The largest prime number of factorial numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long last_number = 612852475143;
	long i = 0;
	long res = 0;

	for (i = 2; i <= last_number; i++)
	{
		if (last_number % i == 0)
		{
			if (i > res)
			{
				res = i;
			}

			last_number /= i;
		}

		if (last_number == 1)
		{
			break;
		}
	}
	printf("%ld\n", res);

	return (0);
}
