#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - return pow any number.
 * @x:contains a number.
 * @y:contains a pow
 * Return: pow of a number.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0 || y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		return (pow(_pow_recursion(x, y / 2), 2));
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
