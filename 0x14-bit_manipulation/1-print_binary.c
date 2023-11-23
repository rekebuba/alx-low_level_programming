#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
char buffer[64];
int index = 0;
int i;

if (n == 0)
{
_putchar('0');
}
while (n != 0)
{
buffer[index] = (n & 1) ? '1' : '0';
n = (n >> 1);
index++;
}
for (i = index - 1; i >= 0; i--)
{
_putchar(buffer[i]);
}
}
