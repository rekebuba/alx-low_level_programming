#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
size_t i;
int *array;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(sizeof(nmemb) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = 0;
}
return (array);
free(array);
}
