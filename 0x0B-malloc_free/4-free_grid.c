#include "main.h"

/**
 * free_grid - frees a 2 dimensional
 * grid previously created by the alloc_grid function.
 * @grid: A 2d array
 * @height: rows in the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
