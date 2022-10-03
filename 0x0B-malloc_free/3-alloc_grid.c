#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns of the array
 * @height: number of rows of the array
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = (int **) malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	matrix[0] = (int *) malloc(height * width * sizeof(int));

	if (matrix[0] == NULL)
	{
		free(matrix[0]);
		return (NULL);
	}

	for (i = 1; i < height; i++)
		matrix[i] = matrix[0] + i * width;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
