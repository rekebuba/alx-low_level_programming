#include "main.h"

/**
 * main -  times_table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, k;
for (i = 0; i = 9; i++)
{
for (k = 0; k <= 9; k++)
{
_putchar(i * k);
if ((i * k) != 81)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
