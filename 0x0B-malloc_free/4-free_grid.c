#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - entry point
* Return: always 0 success
* @grid: number of commands
* @height: array of pointers to comman
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

