#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a given 2 dimensional grid
 * @grid: the grid
 * @height: height of the given grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
