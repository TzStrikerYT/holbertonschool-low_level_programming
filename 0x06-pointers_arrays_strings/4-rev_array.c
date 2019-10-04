#include "holberton"

/**
 * reverse_array - reverse array.
 *
 * @a: contains an array of elements.
 * @n: Contains a number of elements.
 *
 * Return: reversed array.
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;
	int t;
	int count = 0;

	while (i > n / 2)
	{
		t = a[count];
		a[count] = a[i];
		a[i] = t;
		i--;
		count++;
	}
}
