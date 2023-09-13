#include "main.h"
/**
 * print_sign - checks for absolute character.
 * *@c: the number
 * Return: 1 for positive number -1 for negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
if (n == 0)
{
_putchar('0');
}
return (0);
}
