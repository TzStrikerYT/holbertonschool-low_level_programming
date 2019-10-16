#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - build a matrix
 * @width: width matrix
 * @height: heigth matrix
 *
 * Return: matrix.
 */

int **alloc_grid(int width, int height)
{
	int x;
	int j;
	int i;
	int f = 0;
	int **mat;

	if (width <= 0 || height <= 0)
		return (0);
	mat = malloc(height * sizeof(int *));

	if (mat == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));

		if (mat[i] == 0)
		{
			f = 1;
			break;
		}

		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}

	}

	if (f == 1)
	{
		for (x = 0; x <= i; x++)
		{
			free(mat[x]);
		}
		free(mat);
	}
	return (mat);
}
