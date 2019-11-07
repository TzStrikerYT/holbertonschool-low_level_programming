#include "holberton.h"

/**
 * binary_to_uint - Converts binary number to unsigned int number.
 * @b: Contains a String with our binary number
 * Return: Decimal number on Success, 0 in case of error or number is 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	for (; b && *b; *b++)
	{
		if (*b < '0' || *b > '1')
			return (0);

		dec = dec * 2 + *b - '0';
	}
	return (dec);
}
