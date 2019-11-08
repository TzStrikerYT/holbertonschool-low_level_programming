#include "holberton.h"

/**
 * flip_bits - hamming distance of words bits
 * @n: the first word
 * @m: the second word
 *
 * Return: the hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sh = (sizeof(n) * 8);
	int dist = 0;

	while (sh--)
	      dist += (n >> sh & 1) != (m >> sh & 1);

	      return (dist);
}
