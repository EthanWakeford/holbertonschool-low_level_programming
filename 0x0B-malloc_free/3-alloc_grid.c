#include "main.h"

/**
*alloc_grid - returns pointer to 2d array
*@width: width
*@height: height
*Return: null if fail, grid if success
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	
	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
