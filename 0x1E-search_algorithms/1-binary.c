#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary search
 * @array: input array
 * @size: size of the array
 * @value: the value to search
 *
 * Return: index of the value founded
 */

int binary_search(int *array, size_t size, int value)
{
	int a = 0;
	int b = (int)size - 1;
	int i = 0;

	while(a <= b)
	{
		printf("Sarching in array: ");
		p_array(array, a, b);
		i = (a + b) / 2;

		if (array[i] < value)
			a = i + 1;
		else if (array[i] > value)
			b = i - 1;
		else
			return (i);
	}
	return (-1);
}

/**
 * p_array - searches for a value in an array using binary search
 * @array: input array
 * @a: int value
 * @b: int value
 *
 * Return: Void function
 */

void p_array(int *array, int a, int b)
{
	int i;

	for (i = a; i < b; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
