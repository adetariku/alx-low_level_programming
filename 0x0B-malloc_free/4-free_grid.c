#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: 2 dim. array to free
 * @height: height of array
 *
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid != NULL || height != 0)
	{
		for (index = 0; index < height; index++)
		{											free(grid[index]);
		}
		free(grid);
	}
}
