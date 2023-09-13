#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b;
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(':');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
}
}
}
