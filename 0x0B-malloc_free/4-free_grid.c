#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free allocated memory to a 2d array
 * @grid: the 2d array
 * @height: the count of nested arrays
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		while (i--)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
