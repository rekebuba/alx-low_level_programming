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
j = i * k;
if (j > 9)
{
m = j % 10;
n = (j - m) / 10;
_putchar(',');
_putchar(' ');
_putchar(n + '0');
_putchar(m + '0');
}
else
{
if (k != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(j + '0');
}
}
_putchar('\n');
}
}
