#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - creates an array of chars, and initializes it with a specific char.
* Return: 0
* @str: is pointer
*/

char *_strdup(char *str)
{
char *array;
unsigned int i;
if (str ==  NULL)
{
return (NULL);
}
array = (char *) (malloc(sizeof(str) + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < sizeof(str) + 1; i++)
{
array[i] = str[i];
}
array[sizeof(str) + 1] = '\0';
return (array);
}
