#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string.
* Return: 0
* @s: is string
*/

void rev_string(char *s)
{
int len = strlen(s);
int i;
char cha[strlen(s) + 1];
for (i = len - 1; i >= 0; i--)
{
cha[i] = s[i];
}
puts(cha);
}
