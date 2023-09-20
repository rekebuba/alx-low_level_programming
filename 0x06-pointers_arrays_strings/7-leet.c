#include "main.h"
#include <ctype.h>
#include <string.h>
/**
* leet - updates the value it points to to 98.
* Return: 0
* @n: character.
*/

char *leet(char *n)
{
int i;
int len = strlen(n);

for (i = 0; i < len; i++)
{
if (isalpha(n[i]))
{
if (n[i] == 'a' || n[i] == 'A')
{
n[i] = 52;
}
else if (n[i] == 'e' || n[i] == 'E')
{
n[i] = 51;
}
else if (n[i] == 'o' || n[i] == 'O')
{
n[i] = 48;
}
else if (n[i] == 't' || n[i] == 'T')
{
n[i] = 55;
}
else if (n[i] == 'l' || n[i] == 'L')
{
n[i] = 49;
}
}
}
return (n);
}
