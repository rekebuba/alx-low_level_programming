#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Create a array object
 * @str: character
 * return char* 
 */

char *str_concat(char *s1, char *s2)
{
    unsigned int i;
    char *array1;
    char *array2;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    
    array1 = (char *) (malloc(sizeof(s1) + 1));
    if (array1 == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < sizeof(s1) + 1; i++)
    {
        array1[i] = s1[i];
    }
    array1[sizeof(s1) + 1] = '\0';
    array2 = realloc(array1, sizeof(s1) + sizeof(s2) + 1);
    for (i = 0; i < sizeof(s1) + sizeof(s2) + 1; i++)
    {
        array2[i] = s2[i];
    }
    array2[sizeof(s1) + sizeof(s2) + 1] = '\0';
    return (array2);

}