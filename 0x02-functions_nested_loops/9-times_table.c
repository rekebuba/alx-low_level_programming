#include "main.h"

/**
 * main -  times_table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, k, j;
for (i = '0'; i <= '9'; i++)
{
for (k = '0'; k <= '9'; k++)
{
j = i * k;
_putchar(j);
if (j != 81)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
