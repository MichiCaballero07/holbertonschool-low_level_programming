#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - maked grid
 * @width: input
 * @height: input
 * Return:  pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((height) * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		grid[i] = malloc((width) * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		if (grid[i] != NULL)
			for (j = 0; j <= width; j++)
				grid[i][j] = 0;

	}
	return (grid);
}
