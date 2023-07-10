#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2D array
 * @grid: 2D grid to be freed
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);/*Free the memory for each row of the grid*/
	}
	free(grid);/*Free the memory for the grid itself*/
}
