#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: character
 * @s2: character
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, l, len1, len2;
char *array;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = 0, len2 = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
array = (char *) (malloc(sizeof(char) * (len1 + len2 + 1)));
if (array == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
array[i] = s1[i];
i++;
}
l = 0;
while (s2[l] != '\0')
{
array[i] = s2[l];
i++;
l++;
}
array[i] = '\0';
return (array);
}
