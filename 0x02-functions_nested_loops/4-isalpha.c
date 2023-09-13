#include "main.h"
/**
 * main - checks for alphabetic character.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 65 || c <= 122)
{
return (0);
}
else
{
return (1);
}
_putchar('\n');
}
