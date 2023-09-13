#include "main.h"

/**
 * _isalpha - _isalpha.
 *@c: the character
 * Return: 1 for alphabetic character or 0 for anything else.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
