#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a formerly created 2-D grid
  * @grid: grid
  * @height: number of rows present in the grid
  *
  */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
