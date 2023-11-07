#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that free grids
 * @grid: specific grid
 * @height: height of grid
 * Return: free a 2 dimensional grid
 */

void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
