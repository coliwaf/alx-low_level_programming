#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimentional array of integers
 * @grid: the grid param to free
 * @height: height of @grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
