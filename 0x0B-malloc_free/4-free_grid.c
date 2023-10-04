#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - concatenates two strings.
 * @grid: character
 * @height: character
 * Return: 0
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
