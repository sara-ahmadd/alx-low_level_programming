#include "main.h"
#include <stdio.h>
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
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
}
