#include "main.h"

/**
 * print_square - draws a straight line
 *@size: integer.
 * Return: Always 0.
 */
void print_square(int size)
{
int k = 0;
int j = 0;
if (size > 0)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}

else if (size <= 0)
{
_putchar('\n');
}
}
