#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the created 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
{
			/* Free previously allocated memory */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
}
}

	return (grid);
}
