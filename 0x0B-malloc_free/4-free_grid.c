#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: pointer 2d
 * @height: h
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
