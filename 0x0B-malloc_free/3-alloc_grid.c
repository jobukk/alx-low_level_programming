#include "main.h"
#include <stdlib.h>

/*
 *alloc_grid -  width and height as parameters then assign the memory location
 *@width - this is the width of 2D
 *@height - this is height of 2D
 *
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
