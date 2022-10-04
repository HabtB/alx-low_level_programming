#include "main.h"

/**
 * alloc_grid- creates a 2 dimensional array
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 *
 * Return: returns a pointer to 2-dim array
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);

			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}

