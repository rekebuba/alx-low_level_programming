#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* rot13 - updates the value it points to to 98.
* Return: 0
* @n: character.
*/

char *rot13(char *n)
{
int i;
int len = strlen(n);

for (i = 0; i < len; i++)
{
if (isalpha(n[i]))
{
if (isupper(n[i]))
{
n[i] = (n[i] - 65 + 13) % 26 + 65;
}
else if (islower(n[i]))
n[i] = (n[i] - 97 + 13) % 26 + 97;
}
}
return (n);
}
