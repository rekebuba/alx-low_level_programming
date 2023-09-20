#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* cap_string - updates the value it points to to 98.
* Return: 0
* @n: character.
*/

char *cap_string(char *n)
{
int i;
int len = strlen(n);

for (i = 0; i < len; i++)
{
if (isalpha(n[i]))
{
n[i] = n[i] - 32;
}
}
return (n);
}
