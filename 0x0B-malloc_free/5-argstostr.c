#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen  - set the integer to 402
 * @s: a pointer the integer
 * @ac: argument count
 * Return: length String
 */
int _strlen(int ac, char *s)
{
	int i = 0;
	int j = 0;

	while (j < ac)
	{
		while (*s != '\0')
		{
			s++;
			i++;
		}
		j++;
	}
	return (i);
}

/**
 * concat - concat 2 Strings
 * @s: multidimensional array
 * @c: integer value
 * Return: String
 */
char *concat(int c, char **s)
{
	int i;
	int j;
	int k;
	char *array;
	int l = _strlen(c, *s);

	array = malloc(sizeof(char) * l * c + 1);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	k = 0;

	for (i = 0; i < c; i++)
	{
		for (j = 0; s[i][j] != '\0'; j++)
		{
			array[k] = s[i][j];
			k++;
		}
		array[k] = '\n';
		k++;
	}

	return (array);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: integer value
 * @av: multidimensional array
 * Return: concatenes all arguments
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == '\0')
	{
		return (NULL);
	}

	return (concat(ac, av));
}
