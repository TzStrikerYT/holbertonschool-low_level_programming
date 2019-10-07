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
	int i;
	int flag = 0;

	for (i = 0; *s != '\0'; i++)
	{
		if (c != s[i])
		{
			s++;
		}
		else if (c == s[i])
		{
			flag++;
			return (s + i);
		}
	}

	if (flag == 0)
	{
		return (0);
	}
	return (s);
}
