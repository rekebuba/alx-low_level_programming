#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i, j, k;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '14'; j++)
{
    if (j < '9')
    {
        j = (j / 10) + '0');
        k = (j % 10) + '0');
    }
_putchar(j);
}
_putchar('\n');
}
_putchar('\n');
}
