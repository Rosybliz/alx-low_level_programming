#include <stdlib.h>
#include "main.h"

/**
 * free_grid- a function that frees a two dimensional
 * grid previously created
 * @grid: the row of the grid
 * @height: the grid column
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
