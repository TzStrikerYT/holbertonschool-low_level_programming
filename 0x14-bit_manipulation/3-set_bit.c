#include "holberton.h"

/**
 * get_bit - sets the value of a bit.
 * @n: contains a integer value.
 * @index: contains a index.
 * Return: 1 on Success, in case of error return -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j = 1;
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		j = j * 2;

	*n |= j;

	return (1);
}
