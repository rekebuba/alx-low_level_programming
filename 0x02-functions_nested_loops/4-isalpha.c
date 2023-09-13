#include "main.h"

/**
 * main - prints _isalpha.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
