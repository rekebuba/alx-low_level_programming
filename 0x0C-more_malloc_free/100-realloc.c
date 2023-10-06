#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy memory for an array, using malloc.
 * @new_ptr: character
 * @ptr: character
 * @size: integer.
 * Return: 0.
 */

char *_memcpy(char *new_ptr, char *ptr, unsigned int size)
{
unsigned int i;
for (i = 0; i < size; i++)
{
new_ptr[i] = ptr[i];
}
return (new_ptr);
}

/**
 * array_range - allocates memory for an array, using malloc.
 * @min: integer.
 * @max: integer.
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if  (new_ptr == NULL)
{
return (NULL);
}
min_size = (old_size < new_size) ? old_size : new_size;
_memcpy(new_ptr, ptr, min_size);
free(ptr);
return new_ptr;
}
