#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2D grid previously created
 * @grid: grid input
 * @height: input
 * Return : Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
