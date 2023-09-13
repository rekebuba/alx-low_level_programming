#include "main.h"

/**
 * main -  the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
for (int i = 0; i = 9; i++)
{
for (int k = 0; k <= 9; k++)
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
