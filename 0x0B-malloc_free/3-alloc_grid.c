#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates and returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure and if @height or @width is 0 or less.
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **allocGrid;
	int len = width * height;

	if (len <= 0)
		return (NULL);
	allocGrid = (int **)malloc(height * sizeof(int *));
	if (allocGrid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		allocGrid[x] = (int *)malloc(width * sizeof(int));
		if (allocGrid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(allocGrid[x]);
			free(allocGrid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			allocGrid[x][y] = 0;
	}
	return (allocGrid);
}
