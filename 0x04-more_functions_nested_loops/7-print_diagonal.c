#include "main.h"

/**
 * print_line - draws a straight line
 *@n: integer.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int k = 0;
int j = 0;
if (n > 0)
{
for (k = 0; k < n; k++)
{
_putchar(' ');
for (j = 0; j < n; j++)
{
_putchar('\\');
}
_putchar('\n');
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
