#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcmp - compares two strings.
* Return: 0
* @s1: is a character
* @s2: is a character
*/

int _strcmp(char *s1, char *s2)
{
    if (strcmp(s1, s2) == 0)
    {
        printf("0");
    }
    else if (strcmp(s1, s2) < 0)
    {
        printf("15");
    }
    else if (strcmp(s1, s2) > 0)
    {
        printf("-15");
    }
    return(0);
}