#include "holberton.h"

/**
 * _number - help to find raiz nuber.
 *
 * @a: number to find raiz.
 * @x: raiz number.
 *
 * Return: raiz of the number.
 */

int _number(int a, int x)
{
	if ((x * x) == a)
	{
		return (x);
	}
	else if ((x * x) > a)
	{
		return (-1);
	}

	return (_number(a, x + 1));
}

int _sqrt_recursion(int n)
{
	return (_number(n, 1));
}
