#include "holberton.h"

/**
 * _isalpha - check if a number, or not
 *
 * @c: is a in variable
 *
 * Return: 0 if is a letter, 1 if is a numeber.
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
