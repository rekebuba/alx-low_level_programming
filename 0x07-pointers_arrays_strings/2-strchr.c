#include "main.h"

/**
* _strchr - function that locates a character in a string.
* Return: 0
* @s: is pointer
* @c: character
*/

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
