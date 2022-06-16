#include "main.h"

/**
*alloc_grid - returns pointer to 2d array
*@width: width
*@height: height
*Return: null if fail, grid if success
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;
	
	grid = malloc((width * height + 1) * sizeof(int));
	if (grid == NULL)
		return (NULL);
	if (width < 1 || height < 1)
		return (NULL);
	for (i = 0; i < width * height; i++)
	{
		grid[i] = 0;
	}
	return (grid);
}
