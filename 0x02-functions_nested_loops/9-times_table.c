#include "main.h"

/**
 * times_table -  times_table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, k, j, m, n;
for (i = 0; i <= 9; i++)
{
for (k = 0; k <= 9; k++)
{
j = (i * k);
_putchar(j);
if (j > 9)
{
m = j % 10;
n = (j - m) / 10;
_putchar(m);
_putchar(n);
}
if (k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
