#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make a 2D array of ints
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the alloc grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid[y]);

			free(grid);
			return (NULL);
		}

		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
