#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: the 2D array to be freed.
 * @height: height value of the grid.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
free(grid[index]);

free(grid);
}
