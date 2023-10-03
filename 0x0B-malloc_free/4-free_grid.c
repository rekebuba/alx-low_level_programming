#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: character
 * @s2: character
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
    int **grid;
    unsigned int i, j; 
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    grid = (int *) (malloc(sizeof(int) * height));
    if (grid == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *) (malloc(sizeof(int) * width));
        if (grid[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        for (int j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }
    free(grid);
    return grid;
}