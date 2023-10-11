#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * 
 * @array: array
 * @size: element in the array
 * @cmp: function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (0);
}
