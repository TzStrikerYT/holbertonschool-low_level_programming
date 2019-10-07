#include "holberton.h"

/**
 * _strspn - count fist coincidences in a string.
 *
 *@s: Contains a String to analize.
 *@accept: Contains a array of chars.
 * Return: n coincidences.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int flag = 0;
	char *saved = accept;

	for (; *s && flag == i; s++, i++)
		for (accept = saved; *accept; accept++)
			if (*s == *accept)
				flag++;

	return (flag);
}
