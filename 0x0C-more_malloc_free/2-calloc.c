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
unsigned int i, total;
void *array;
unsigned char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total = sizeof(nmemb) * size;
array = malloc(total);
if (array == NULL)
{
return (NULL);
}
ptr = (unsigned char *)array;
for (i = 0; i < total; i++)
{
ptr[i] = 0;
}
return (array);
}
