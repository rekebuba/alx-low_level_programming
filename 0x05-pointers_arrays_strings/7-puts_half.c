#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string, followed by a new line.
* @str: is string
* Return: 0
*/

void puts_half(char *str)
{
int i;
int len = strlen(str - 1);
if (len % 2 != 0)
{
for (i = len / 2; i < len; i++)
{
putchar(str[i]);
}
}
if (len % 2 == 0)
{
for (i = (len - 1) / 2; i < len; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
