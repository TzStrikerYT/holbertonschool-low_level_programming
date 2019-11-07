#include "holberton.h"

/**
 * get_bit - returns the value of a bit
 * @n: contains a integer value.
 * @index: contains a index.
 * Return: value of a bit on Success, in case of error return -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;

        return(n & 1);
}
