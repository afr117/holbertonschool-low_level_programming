#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
	w = 0;
	while (w < width)
	{
	printf("%d ", grid[h][w]);
	w++;
	}
	printf("\n");
	h++;
	}
}

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the grid to free
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
