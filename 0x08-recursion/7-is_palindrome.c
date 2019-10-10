#include "holberton.h"

/**
 * _count - count length of a string.
 *
 * @a: String.
 * @len: length String.
 *
 * Return: length of string.
 */

int _count(char *a, int len)
{
	return (*a == 0 ? len - 1 : _count(a + 1, len + 1));
}

/**
 * _vs - Compares String vs reversed String.
 *
 * @a: String
 * @len: Length.
 *
 * Return: 0 if is palindrome.
 */

int _vs(char *a, int len)
{
	if (*a != *(a + len))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}

	return (_vs(a + 1, len - 2));
}

/**
 * is_palindrome - say if a string is palindrome or not.
 * @s: String to compare.
 * Return: success 0.
 */

int is_palindrome(char *s)
{
	int len = _count(s, 0);

	return (_vs(s, len));
}
