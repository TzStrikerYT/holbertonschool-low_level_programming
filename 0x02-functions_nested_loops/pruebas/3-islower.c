#include "holberton.h"

/**
 * _islower check a letter for know is lower or not
 *
 * c is a in variable
 *
 * Return: 0 if the letter islower.
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
