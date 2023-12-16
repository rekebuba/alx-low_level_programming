#include "main.h"

/**
 * print_line - draws a straight line
 *@n: integer.
 * Return: Always 0.
 */
void print_line(int n)
{
	int k = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (k < n)
		{
			_putchar('_');
			k++;
		}
		_putchar('\n');
	}
}
