#include "main.h"

/**
* puts2 -  prints every other character of a string, starting with the first character
* Return: 0
* @str: is string
*/

void puts2(char *str)
{
int i = 0;
for (i = 0; i <= strlen(str); i + 2)
{
putchar(str[i]);
}
}
