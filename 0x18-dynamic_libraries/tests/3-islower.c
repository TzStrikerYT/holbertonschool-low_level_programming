#include "holberton.h"

/**
 * _islower - check a letter for know is lower or not
 *
 *@c: is a variable
 *
 * Return: Always 0
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
