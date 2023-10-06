#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int.
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
void *array;
array = malloc(sizeof(b));
if (array == NULL)
{
exit(98);
}
return (array);
}
