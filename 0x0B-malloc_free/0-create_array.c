#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it with a specific char.
* Return: 0
* @size: is pointer
* @c: is pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (0);
}
array = (char *) malloc(sizeof(char) * (size + 1));
if (array == NULL)
{
return (0);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
array[size] = '\0';
return (array);
}
