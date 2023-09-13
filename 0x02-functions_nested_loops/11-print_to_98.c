#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  the 9 times table
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = 0; i <= 98; i++)
{
printf("%n", n + i);
if(i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
if (n > 98)
{
for (i = 0; i <= 98; i++)
{
printf("%n", n - i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
