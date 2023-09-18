#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* _atoi - prints n elements of an array of integers
* @s: is character
* Return: 0
*/

int _atoi(char *s)
{
int i;
int len = strlen(s);
for (i = 0; i < len - 1; i++)
{
if (isdigit(s[i]))
{
putchar(s[i]);
}
if (!isdigit(s[i]))
{
return (0);
}
}
return (0);
}
