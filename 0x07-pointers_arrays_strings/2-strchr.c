#include "holberton.h"

/**
 * _strchr - Substring function.
 * @s: Contains a String.
 * @c: contains a character for init Substring.
 *
 * Return: Final substring.
 */

char *_strchr(char *s, char c)
{
	while (*s && !(*s == c))
		s++;

	return ((*s == c) ? s : 0);
}
