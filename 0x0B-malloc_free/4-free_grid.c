#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - frees 2 dimensional grid previously created by alloc_grid fn
  * @grid: multidimensional array of integers
  * @height: height of grid
  *
  * Return: none
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
