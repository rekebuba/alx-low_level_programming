#include <stdio.h>
#include "main.h"
/**
 * main -  the 9 times table
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
for(i = 0; i <= 98; i++)
{
_putchar((n + i) + '0');
if(i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
