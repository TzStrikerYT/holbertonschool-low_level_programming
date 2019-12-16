#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check if uppercase or otherwise
 *
 * @c: contain a ascii character
 *
 * Return: 0 if is oyherwise or 1 if is an number.
 */

int _isdigit(int c)
{

	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
