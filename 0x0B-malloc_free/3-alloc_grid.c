#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  make and free space in grid
 * @width: grid width
 * @height: grid height
 * Return: freed spaces of grid
 */

int **alloc_grid(int width, int height)
{
	int n, m;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(sizeof(int) * width);
		if (grid[n] == NULL)
		{
			for (n = n - 1; n >= 0; n--)
			{
				free(grid[n]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (n = 0; m < width; m++)
	grid[n][m] = 0;
	return (grid);
}
