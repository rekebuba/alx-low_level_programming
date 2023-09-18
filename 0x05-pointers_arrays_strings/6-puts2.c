#include "main.h"
#include <string.h>

/**
* puts2 -  prints every other character of a string, starting with the first character
* Return: 0
* @str: is string
*/

void puts2(char *str)
{
int i = 0;
int len = strlen(str);
for (i = 0; i <= len; i++)
{
if (i == 0)
{
putchar(str[i]);
}
else
{
putchar(str[i+1]);
}
}
}
