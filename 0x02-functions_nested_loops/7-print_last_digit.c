#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *@i:
 * Return: Always 0.
 */
int print_last_digit(int i)
{
int k = i % 10;
if (k < 0)
{
_putchar(-k + 48);
return (-k);
}
else
{
_putchar(k + 48);
return (k);
}
return (k);
}
