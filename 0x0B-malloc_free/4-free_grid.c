#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - int **grid,
 * @grid: 2d grid
 * @height: height dimension
 * Description: frees memory
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; i < height; i++)
	{
		free(grid[j]);
	}
	free(grid);
}
