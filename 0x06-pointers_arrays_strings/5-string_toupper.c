#include "holberton.h"

/**
 * string_toupper - Transform a string to lower case.
 *
 * @s: contais a String.
 *
 * Return: uppercased String.
 */

char *string_toupper(char *s)
{

	int i;

	for (i = 0; *s; s++, i++)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s -= 32;
		}
	}

	return (s - i);
}
