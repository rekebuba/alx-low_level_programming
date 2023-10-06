#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * Return: void.
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
for (i = min; i <= size; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
