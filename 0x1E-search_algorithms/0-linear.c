#include "search_algos.h"

/**
 * Linear_search - searches for a value in an array using linear search
 * @array: input array
 * @size: size of the array
 * @value: the value to search
 *
 * Return: index of the value founded
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n",
			       i, array[i]);
			if (value == array[i])
				return (i);
		}
	return (i);
}
