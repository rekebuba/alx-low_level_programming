#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* Return: 0
* @n: character.
*/

char *string_toupper(char *n)
{
int i;
int len = strlen(n);

for (i = 0; i <= len; i++)
{
if (n[i] > 97 && n[i] < 122)
{
n[i] = toupper(n[i]);
}
}
return (n);
}
