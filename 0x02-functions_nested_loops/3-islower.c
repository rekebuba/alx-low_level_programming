#include "main.h"
/**
 * main - checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 || c <= 122)
{
return (0);
}
else
{
return (1);
}
_putchar('\n');
}
