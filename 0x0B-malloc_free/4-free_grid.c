#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2d array
 * @grid: pointer to grid
 * @height: height
 *
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}

