#include "holberton.h"

/**
 * _number - help to find prime number.
 *
 * @a: number.
 * @x: divisor.
 *
 * Return: if prime or not.
 */

int _number(int a, int x)
{
	if (a == x)
	{
		return (1);
	}
	else if (a % x == 0)
	{
		return (0);
	}
	return (_number(a, x + 1));
}

/**
 * is_prime_number - say if a prime number or not.
 *
 * @n: number.
 *
 * Return: if prime or not.
 */

int is_prime_number(int n)
{
	return (n <= 1 ? 0 : _number(n, 2));
}
