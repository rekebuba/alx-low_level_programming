#include "main.h"

/**
* _strchr - concatenates two strings.
* Return: 0
* @s: is pointer
* @c: character
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
