#include "main.h"

/**
 * print_triangle - draws a straight line
 *@size: integer.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int k, i, j;
if (size <= 0)
{
_putchar('\n');
}

else
{
for (k = 0; k < size; k++)
{
for (i = 0; i < size - k; i++)
{
_putchar(' ');
}
for (j = 0; j <= k; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
