#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - return pointer to 2d array
 * @width: the size of the nested array
 * @height: the size of the main array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int *grid[height];
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * (width * sizeof(int)));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);

}
