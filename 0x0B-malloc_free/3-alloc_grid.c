#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: character
 * @height: character
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
int **array;
int i, y;

if (width <= 0 || height <= 0)
return (NULL);

array = malloc(sizeof(int *) * height);

if (array == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);

if (array[i] == NULL)
{
for (; i >= 0; i--)
free(array[i]);

free(array);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (y = 0; y < width; y++)
array[i][y] = 0;
}
return (array);
}
