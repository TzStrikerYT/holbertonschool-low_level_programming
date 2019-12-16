#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check if uppercase or otherwise
 *
 * @c: contain a ascii character
 *
 * Return: 0 if is oyherwise or 1 if is uppercase.
 */

int _isupper(int c)
{

	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
