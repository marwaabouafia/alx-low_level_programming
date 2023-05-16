#include "main.h"

/**
 *
 * free_grid - a function that frees a 2 dimensional grid 
 *
 * @grid: int
 * @height: int
 *
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
