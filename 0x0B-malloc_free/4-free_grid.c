#include "main.h"
#include <stdlib.h>

/**
* free_grid - free 2D array
* @grid: 2D grid
* @height: height dimension of the grid heap
* Description: free memory of the grid heap
* Return: none
*
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i <= height; i++)
{
free(grid[i]);
}
free(grid);

}
