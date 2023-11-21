#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
return (grid);
}
