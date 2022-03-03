#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array 
 * @width: horizontal
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
		{
			grid[i][j] = 0;
		}
	}
		return (grid);
}

