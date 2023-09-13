#include "main.h"

/**
 * main -  times_table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, k, j, m;
for (i = 0; i <= 9; i++)
{
for (k = 0; k <= 9; k++)
{
j = (i * k) + '0';
_putchar(j);
if (j > 9)
{
m = j - (j % 10) / 10;
_putchar(m);
}
if (j != 81)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
