#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array, using malloc.
 * @min: integer.
 * @max: integer.
 * Return: 0.
 */

int *array_range(int min, int max)
{
int i, size;
int *ptr;
if (min > max)
{
return (NULL);
}
size = abs(max - min) + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
