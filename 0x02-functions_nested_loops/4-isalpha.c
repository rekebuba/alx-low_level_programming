#include "main.h"
/**
 * main - checks for alphabetic character.
 *
 * Return: Always 0.
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
