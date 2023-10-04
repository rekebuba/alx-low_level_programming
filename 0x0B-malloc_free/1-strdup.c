#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - creates an array of chars.
* Return: 0
* @str: is pointer
*/

char *_strdup(char *str)
{
char *array;
unsigned int len;
unsigned int i;
len = 0;
while (str[len] != '\0')
{
len++;
}
array = (char *) (malloc(sizeof(char) * (len + 1)));
if (str == NULL || array == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
array[i] = str[i];
}
array[len] = '\0';
return (array);
}
