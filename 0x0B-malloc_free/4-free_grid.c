#include "main.h"
#include <stdlib.h>

/**
 * free_grid - makes and free grid space
 * @grid: grid width
 * @height:grid height
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
